#include "Map.h"

Map::Map(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    webchannel = new QWebChannel(parent);
    QString htmlPath = "HTMLPage.html";
    ui.widget->page()->load(QUrl("D:/project/QT/Map/HTMLPage.html"));
    ui.widget->page()->setWebChannel(webchannel);
}

Map::~Map()
{}
