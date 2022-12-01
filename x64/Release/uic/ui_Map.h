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
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_MapClass
{
public:
    QWebEngineView *widget;

    void setupUi(QWidget *MapClass)
    {
        if (MapClass->objectName().isEmpty())
            MapClass->setObjectName(QString::fromUtf8("MapClass"));
        MapClass->resize(600, 400);
        widget = new QWebEngineView(MapClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 20, 551, 361));

        retranslateUi(MapClass);

        QMetaObject::connectSlotsByName(MapClass);
    } // setupUi

    void retranslateUi(QWidget *MapClass)
    {
        MapClass->setWindowTitle(QCoreApplication::translate("MapClass", "Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapClass: public Ui_MapClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
