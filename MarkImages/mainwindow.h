#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QPainter>
#include "customlabel.h"
#include "saveoptions.h"
#include "settingsdialog.h"
#include <QHBoxLayout>
#include <QSplitter>
#include <QStackedWidget>
#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString textInEdit();

public slots:
    void startFileDialog();
    void handleTextChange();
    void savePixmap(QString filePath);
    void openSettings();
    void changeColorBlack();
    void changeColorBlue();
    void changeSizeS1();
    void changeSizeS2();

signals:

private:
    Ui::MainWindow *ui;
    CustomLabel *customLabel;
    int test;
    QStackedWidget *stackedWidget ;
    SaveOptions* so;
    settingsdialog* sd;

    QString color;
    QString size;

protected:
    //void paintEvent(QPaintEvent *event) override;
};
#endif // MAINWINDOW_H
