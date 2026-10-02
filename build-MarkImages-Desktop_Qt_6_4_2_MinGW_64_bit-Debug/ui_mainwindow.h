/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pbOpenImageDialog;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QPushButton *pbSave;
    QTextEdit *textEdit;
    QPushButton *pbChangePage;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pbOpenImageDialog = new QPushButton(centralwidget);
        pbOpenImageDialog->setObjectName("pbOpenImageDialog");
        pbOpenImageDialog->setGeometry(QRect(30, 50, 75, 24));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(30, 120, 84, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(30, 200, 22, 84));
        verticalSlider->setOrientation(Qt::Vertical);
        pbSave = new QPushButton(centralwidget);
        pbSave->setObjectName("pbSave");
        pbSave->setGeometry(QRect(250, 420, 91, 24));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(390, 390, 341, 71));
        pbChangePage = new QPushButton(centralwidget);
        pbChangePage->setObjectName("pbChangePage");
        pbChangePage->setGeometry(QRect(250, 370, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbOpenImageDialog->setText(QCoreApplication::translate("MainWindow", "Open Image", nullptr));
        pbSave->setText(QCoreApplication::translate("MainWindow", "Save Options", nullptr));
        pbChangePage->setText(QCoreApplication::translate("MainWindow", "change page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
