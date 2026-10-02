#include "saveoptions.h"

SaveOptions::SaveOptions(QWidget *parent)
    : QWidget{parent}
{
    label = new QLabel("Save Location:");
    label2 = new QLabel("file name");
    lineEdit = new QLineEdit(this);
    lineEdit2 = new QLineEdit(this);
    buttonS = new QPushButton("Save", this);
    buttonB = new QPushButton("Browse", this);
    QVBoxLayout* layout = new QVBoxLayout;
    QHBoxLayout* layout2 = new QHBoxLayout;
    QHBoxLayout* layout3 = new QHBoxLayout;

    layout2->addWidget(label);
    layout2->addWidget(lineEdit);
    layout2->addWidget(buttonB);

    layout3->addWidget(label2);
    layout3->addWidget(lineEdit2);

    layout->addLayout(layout2);
    layout->addLayout(layout3);
    layout->addWidget(buttonS);

    setLayout(layout);

    QObject::connect(buttonB, &QPushButton::clicked, this, &SaveOptions::browseForFolder);
    QObject::connect(buttonS, &QPushButton::clicked, this, &SaveOptions::saveFile);
}

void SaveOptions::browseForFolder()
{
    QFileDialog fileDialog;
    fileDialog.setFileMode(QFileDialog::Directory);


    if (fileDialog.exec())
    {
        QString selectedDirectory = fileDialog.selectedFiles().at(0);

        lineEdit->setText(selectedDirectory);
    }
    else
    {

    }
}

void SaveOptions::saveFile()
{
    QString text = lineEdit->text();
    if(text.isEmpty())
    {

    }
    else{
       QString filename = lineEdit2->text();
       QString folderpath = lineEdit->text();
       QString filePath = folderpath + "/" + filename;
       QFile file(filePath+".PNG");
       if(file.exists())
       {

       }
       else{
           emit saveSignal(filePath);
       }
    }
}
