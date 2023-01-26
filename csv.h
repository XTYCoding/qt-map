#include <QVector>
#include<QFile>
#include<QHash>
#include<QDebug>
#include<QTextCodec>
#include "point.h"

class CsvReader {
private:
	QVector<Point> points;
	QHash<QString,int> heads;
public:
	void getList(QString);
	void getListHeads(QString);
	QVector<Point> getPoints();
};

class CsvMaker {
private:
	QVector<QString> nodeList;//�洢JS���ݵĵ�
	QVector<QString> circleList;
	QVector<QVector<double>> trackList;//�洢�켣��γ��
	QVector<QVector<double>> pointPairsList;
public:
	void addNode(QString lnglat,int type);
	void makeList(int type);
	void generateFile(QString filename,int type);

};
