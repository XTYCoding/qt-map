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
	QVector<Point> getList(QString);
	QHash<QString,int> getListHeads(QString);
};

class CsvMaker {
public:

};
