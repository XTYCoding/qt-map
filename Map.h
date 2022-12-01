#pragma once

#include <QtWidgets/QWidget>
#include <QWebChannel>
#include <QWebEngineView>
#include "ui_Map.h"

class Map : public QWidget
{
    Q_OBJECT

public:
    Map(QWidget* parent = nullptr);
    ~Map();

private:
    Ui::MapClass ui;
    QWebChannel* webchannel = nullptr;
    QWebEngineView* qwebview = nullptr;
};
