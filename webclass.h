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
        emit set(10);
    }

    void jscallme()
    {
        QMessageBox::information(NULL, "jscallme", "I'm called by js!");
    }

    void show() {
        emit jsShow();
    } 

    void hide() {
        emit jsHide();
    }

    void rcvdata(QString data,int type)
    {
        if (type = 0) {
            qDebug() << data;
            csvmaker->addNode(data,type);//csvmaker实例化并封装再webclass中
        }
        else if (type = 1) {
            qDebug() << data;
            csvmaker->addNode(data,type);//csvmaker实例化并封装再webclass中
        }
    }

    void generatefile() {
        emit generateFile();
    }

    void savefile(QString filename,int type) {
        csvmaker->makeList(type);
        csvmaker->generateFile(filename,type);
    }

 
signals:
    void sendToJs_WGS(QString);
    void set(int);
    void jsShow();
    void jsHide();
    void generateFile();
    void startDraw(QString);
    void selectCircle();
    void getnum();
};


#endif // WEBCLASS_H
