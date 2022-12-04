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
    CsvMaker* csvmaker;

public slots:
    void sendWgs(QString filepath)
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
        emit jsShow();
    }  

signals:
    void sendToJs_WGS(QString);
    void jsShow();

};


#endif // WEBCLASS_H
