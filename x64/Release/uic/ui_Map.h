/********************************************************************************
** Form generated from reading UI file 'Map.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_MapClass
{
public:
    QWebEngineView *widget;
    QPushButton *send;
    QPushButton *show;

    void setupUi(QWidget *MapClass)
    {
        if (MapClass->objectName().isEmpty())
            MapClass->setObjectName(QString::fromUtf8("MapClass"));
        MapClass->resize(727, 521);
        widget = new QWebEngineView(MapClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 20, 591, 491));
        send = new QPushButton(MapClass);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(600, 30, 93, 28));
        show = new QPushButton(MapClass);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(600, 90, 93, 28));

        retranslateUi(MapClass);

        QMetaObject::connectSlotsByName(MapClass);
    } // setupUi

    void retranslateUi(QWidget *MapClass)
    {
        MapClass->setWindowTitle(QCoreApplication::translate("MapClass", "Map", nullptr));
        send->setText(QCoreApplication::translate("MapClass", "PushButton", nullptr));
        show->setText(QCoreApplication::translate("MapClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapClass: public Ui_MapClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
