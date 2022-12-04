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
public:

};
