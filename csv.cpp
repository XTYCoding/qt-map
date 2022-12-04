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



