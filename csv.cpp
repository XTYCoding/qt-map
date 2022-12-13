#include "csv.h"

void CsvReader::getListHeads(QString head) {
	QStringList _lst = head.split(QLatin1Char(','));
	QHash<QString, int> heads;
    for (int i = 0; i < _lst.size(); i++) {
        if (_lst[i] == "ID")
            heads["id"] = i;
        if (_lst[i] == "Longitude")
            heads["longitude"] = i;
        if (_lst[i] == "Latitude")
            heads["latitude"] = i;
        if (_lst[i] == "Yaw")
            heads["yaw"] = i;
        if (_lst[i] == "Roll")
            heads["roll"] = i;
        if (_lst[i] == "Pitch")
            heads["pitch"] = i;
    }
    this->heads = heads;
}

void CsvReader::getList(QString filepath) {
	QFile file(filepath);
	bool open = file.open(QIODevice::ReadOnly | QIODevice::Text);
	if (!open) {
		qDebug() << "failed to open";
		return;
	}
	QTextStream in(&file);
	QString strline = in.readLine();
    getListHeads(strline);
    int column_id = heads["id"];
    int column_longitude = heads["longitude"];
    int column_latitude = heads["latitude"];
    int column_yaw = heads["yaw"];
    int column_roll = heads["roll"];
    int column_pitch = heads["pitch"];
    while (!in.atEnd()) {
        QVector<double> infos;
        Point point;
        QString strline = in.readLine();
        QStringList _lst = strline.split(QLatin1Char(','));
        infos.append(_lst[column_id].toDouble());
        infos.append(_lst[column_longitude].toDouble());
        infos.append(_lst[column_latitude].toDouble());
        infos.append(_lst[column_yaw].toDouble());
        infos.append(_lst[column_roll].toDouble());
        infos.append(_lst[column_pitch].toDouble());
        point.setPoint(infos);
        points.append(point);
    }
}

QVector<Point> CsvReader::getPoints() {
    return points;
}

void  CsvMaker::addNode(QString data) {
    nodeList.push_back(data);
}

void CsvMaker::makeList() {
    for (int i = 0; i < nodeList.size() - 1; i++) {
        QVector<double> lnglat;
        //两个一组获取点的经纬度
        QStringList lnglat_1 = nodeList[i].split(QLatin1Char(','));
        QStringList lnglat_2 = nodeList[i + 1].split(QLatin1Char(','));
        //每隔几米插值一个点
        int step = 5;
        //点一点二的经纬度
        double lng_1 = lnglat_1[0].toDouble();
        double lat_1 = lnglat_1[1].toDouble();
        double lng_2 = lnglat_2[0].toDouble();
        double lat_2 = lnglat_2[1].toDouble();
        double lngdiff = lng_2 - lng_1;//经度差
        double latdiff = lat_2 - lat_1;//纬度差
        double distance = lnglat_1[2].toDouble();//两点之间距离
        int n = distance / step;//插值的点的个数
        double perlon = lngdiff / (double(n));
        double perlat = latdiff / n;
        lnglat = { lng_1,lat_1 };
        list.push_back(lnglat);
        //插入点
        for (int j = 1; j <= n; j++) {
            double lng_new = lng_1 + perlon * j;
            double lat_new = lat_1 + perlat * j;
            QVector<double> lnglat_new = { lng_new,lat_new };
            list.push_back(lnglat_new);
        }
        lnglat = { lng_2,lat_2 };
        list.push_back(lnglat);
    }
    //插入完清空
    nodeList = {};
    if (list.size() == 0)
        qDebug() << "empty!!!";
}

void CsvMaker::generateFile(QString filename) {
    //打开创建文件对话框
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    QTextStream in(&file);
    //插入表头
    in << "ID," << "Longitude," << "Latitude," << "\n";
    //逐个插入点
    for (int i = 0; i < list.size(); i++) {
        in << i + 1 << "," << fixed << qSetRealNumberPrecision(6) << list[i][0] << "," << list[i][1] << "\n";
    }
    file.close();
    list = { {} };//清空
}



