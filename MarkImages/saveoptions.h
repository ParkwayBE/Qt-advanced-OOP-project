#ifndef SAVEOPTIONS_H
#define SAVEOPTIONS_H

#include "qlineedit.h"
#include <QWidget>
#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QFile>

class SaveOptions : public QWidget
{
    Q_OBJECT
public:
    explicit SaveOptions(QWidget *parent = nullptr);

signals:
    void saveSignal(QString location);

public slots:
    void browseForFolder();
    void saveFile();

private:
    QLabel* label;
    QLabel* label2;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit2;
    QPushButton* buttonB;
    QPushButton* buttonS;

};

#endif // SAVEOPTIONS_H
