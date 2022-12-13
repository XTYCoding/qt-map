#include "Map.h"

Map::Map(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    webchannel = new QWebChannel();
    webobj = new WebClass();
    webchannel->registerObject("webobj", webobj);
    ui.widget->page()->setWebChannel(webchannel);
    ui.widget->page()->load(QUrl("D:/project/QT/Map/html/HTMLPage.html"));
}

Map::~Map()
{}

void Map::on_send_clicked() {
    QString filepath = QFileDialog::getOpenFileName(
        this,
        tr("open a file."),
        "D:/",
        tr("GPS(*.csv)"));
    if (filepath.isEmpty()) {
        return;
    }
    else {
        //发送信号给JS接收数据
        webobj->sendwgs(filepath);
    }
}

void Map::on_show_clicked() {
    webobj->show();
}

void Map::on_generate_clicked() {
    webobj->generatefile();//这一条要先执行，等待JS将点传输到QT
    QString filename = QFileDialog::getSaveFileName(
        this,
        tr("Excel file"),
        "D:/",
        tr("Files (*.csv"));
    webobj->savefile(filename);//接着再生成文件
}
