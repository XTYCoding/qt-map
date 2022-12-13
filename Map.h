#pragma once

#include <QtWidgets/QWidget>
#include <QWebChannel>
#include <QWebEngineView>
#include<QFileDialog>
#include<QDebug>
#include "webclass.h"
#include "ui_Map.h"

class Map : public QWidget
{
    Q_OBJECT

public:
    Map(QWidget* parent = nullptr);
    ~Map();

private slots:
    void on_send_clicked();
    void on_show_clicked();
    void on_generate_clicked();

private:
    Ui::MapClass ui;
    QWebEngineView* qwebview = nullptr;
    WebClass* webobj = nullptr;
    QWebChannel* webchannel = nullptr;
};
