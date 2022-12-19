#ifndef WEBCLASS_H
#define WEBCLASS_H

#include <QVector>
#include <QDebug>
#include <QMessagebox>
#include"point.h"
#include"csv.h"

class WebClass :public QObject {
    Q_OBJECT
private:
    CsvReader* csvreader;
    CsvMaker* csvmaker = new CsvMaker();

public slots:
    void sendwgs(QString filepath)
    {
        csvreader = new CsvReader();
        csvreader->getList(filepath);
        for (Point &point : csvreader->getPoints()) {
            QString info = point.getPointInfo();
            emit sendToJs_WGS(info);
        }
    }

    void jscallme()
    {
        QMessageBox::information(NULL, "jscallme", "I'm called by js!");
    }

    void show() {
        emit jsShow(10);
    }  

    void rcvdata(QString data)
    {
        csvmaker->addNode(data);//csvmaker实例化并封装再webclass中
    }

    void generatefile() {
        emit generateFile();
    }

    void savefile(QString filename) {
        csvmaker->makeList();
        csvmaker->generateFile(filename);
    }
 
signals:
    void sendToJs_WGS(QString);
    void jsShow(int fr);
    void generateFile();
    void startDraw(QString);

};


#endif // WEBCLASS_H
