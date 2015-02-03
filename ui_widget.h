/********************************************************************************
** Form generated from reading ui file 'widget.ui'
**
** Created: Fri Oct 23 05:17:01 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
    QPushButton *Create;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QWidget *WidgetClass)
    {
        if (WidgetClass->objectName().isEmpty())
            WidgetClass->setObjectName(QString::fromUtf8("WidgetClass"));
        WidgetClass->resize(600, 400);
        Create = new QPushButton(WidgetClass);
        Create->setObjectName(QString::fromUtf8("Create"));
        Create->setGeometry(QRect(30, 10, 75, 24));
        textEdit = new QTextEdit(WidgetClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(13, 43, 571, 341));
        label = new QLabel(WidgetClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 10, 201, 20));

        retranslateUi(WidgetClass);

        QMetaObject::connectSlotsByName(WidgetClass);
    } // setupUi

    void retranslateUi(QWidget *WidgetClass)
    {
        WidgetClass->setWindowTitle(QApplication::translate("WidgetClass", "Airbase CSV to TDF", 0));
        Create->setText(QApplication::translate("WidgetClass", "Load CSV", 0));
        label->setText(QApplication::translate("WidgetClass", "PMC airbase.csv to airbase.tdf converter", 0));
        Q_UNUSED(WidgetClass);
    } // retranslateUi

};

namespace Ui {
    class WidgetClass: public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
