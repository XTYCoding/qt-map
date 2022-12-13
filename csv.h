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
	QVector<QString> nodeList;//´æ´¢JS´«µÝµÄµã
	QVector<QVector<double>> list;//´æ´¢¹ì¼£¾­Î³¶È
public:
	void addNode(QString lnglat);
	void makeList();
	void generateFile(QString filename);

};
