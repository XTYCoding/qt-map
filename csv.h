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
	QVector<QVector<double>> list;//�洢�켣��γ��
public:
	void addNode(QString lnglat);
	void makeList();
	void generateFile(QString filename);

};
