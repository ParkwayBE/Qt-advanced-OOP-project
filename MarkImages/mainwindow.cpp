#include "mainwindow.h"
#include "qmenubar.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStackedWidget *stackedWidget = new QStackedWidget;

    customLabel = new CustomLabel(this);
    customLabel->setMinimumSize(500,500);

    so = new SaveOptions;

    sd = new settingsdialog;

    QObject::connect(so, &SaveOptions::saveSignal, this, &MainWindow::savePixmap);

    stackedWidget->addWidget(customLabel);
    stackedWidget->addWidget(so);


    //customLabel->setMinimumSize(QSize(500, 500));


    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    //QSplitter *splitter = new QSplitter(Qt::Horizontal);

    //QVBoxLayout *vLayout1 = new QVBoxLayout;
    //QVBoxLayout *vLayout2 = new QVBoxLayout;

    //vLayout1->addWidget(ui->pbOpenImageDialog);
    //vLayout1->addWidget(ui->horizontalSlider);
    //vLayout1->addWidget(ui->verticalSlider);

    //vLayout1->setSizeConstraint(QLayout::SetMaximumSize);







   // vLayout2->addWidget(customLabel);
   // vLayout2->addWidget(ui->textEdit);
   // vLayout2->addWidget(ui->pbSave);

   // vLayout1->setAlignment(Qt::AlignLeft | Qt::AlignTop);
   // vLayout2->setAlignment(Qt::AlignLeft | Qt::AlignTop);

   // splitter->addWidget(new QWidget);
   // splitter->addWidget(new QWidget);
    //splitter->widget(0)->setLayout(vLayout1);
   // splitter->widget(1)->setLayout(vLayout2);

    //QHBoxLayout *hLayout = new QHBoxLayout;
    QHBoxLayout *mainLayout = new QHBoxLayout;
    QVBoxLayout *l1 = new QVBoxLayout;
    QVBoxLayout *l2 =new QVBoxLayout;


    l1->addWidget(ui->pbOpenImageDialog);
    l1->addWidget(ui->horizontalSlider);
    l1->addWidget(ui->verticalSlider);
    l1->addWidget(ui->textEdit);
    l1->addWidget(ui->pbSave);

    l2->addWidget(stackedWidget);


    mainLayout->addLayout(l1);
    mainLayout->addLayout(l2);


    //hLayout->addLayout(vLayout1);
    //hLayout->addLayout(vLayout2);
    stackedWidget->setCurrentIndex(0);
    //mainLayout->addWidget(splitter);
    centralWidget->setLayout(mainLayout);
    //centralWidget->setLayout(hLayout);

    QMenu *fileMenu = menuBar()->addMenu("Menu");


    QAction *openAction = new QAction("Settings", this);


    fileMenu->addAction(openAction);

    //ui->horizontalSlider->hide();
    //ui->verticalSlider->hide();
    //ui->textEdit->hide();
    //ui->pbSave->hide();

    connect(ui->pbOpenImageDialog, SIGNAL(clicked()), this, SLOT(startFileDialog()));
    //connect(ui->horizontalSlider, SIGNAL(sliderChanged(int, int)), customLabel, SLOT(handleSliderChange(int,int)));
    QObject::connect(ui->horizontalSlider, &QSlider::valueChanged, customLabel, &CustomLabel::handleHSliderChange);
    QObject::connect(ui->verticalSlider, &QSlider::valueChanged, customLabel, &CustomLabel::handleVSliderChange);
    QObject::connect(ui->textEdit, &QTextEdit::textChanged, this, &MainWindow::handleTextChange);
    //QObject::connect(ui->pbSave, &QPushButton::clicked, customLabel, &CustomLabel::saveImage);
    QObject::connect(ui->pbSave, &QPushButton::clicked, [=]() {
        int currentIndex = stackedWidget->currentIndex();
        int nextPage = (currentIndex + 1) % stackedWidget->count();  // Cyclic navigation
        stackedWidget->setCurrentIndex(nextPage);
    });
    QObject::connect(openAction, &QAction::triggered, this, &MainWindow::openSettings);
    QObject::connect(sd, SIGNAL(changedColorBlack()), this, SLOT(changeColorBlack()));
    QObject::connect(sd, SIGNAL(changedColorBlue()), this, SLOT(changeColorBlue()));

    QObject::connect(sd, SIGNAL(changedSizeS1()), this, SLOT(changeSizeS1()));
    QObject::connect(sd, SIGNAL(changedSizeS2()), this, SLOT(changeSizeS2()));



}
void MainWindow::handleTextChange(){
    customLabel->changeText(ui->textEdit->toPlainText());
}

void MainWindow::savePixmap(QString filePath)
{
    customLabel->saveImage(filePath);
}

void MainWindow::openSettings()
{
    sd->show();
}

void MainWindow::changeColorBlack()
{

   if(size == "20")
   {
       this->setStyleSheet("color: black; font-size: 20px;");
   }
   else if(size == "30")
   {
       this->setStyleSheet("color: black; font-size: 30px;");
   }
   else{
       this->setStyleSheet("color: black;");
   }
   color = "black";


}

void MainWindow::changeColorBlue()
{

    if(size == "20")
    {
        this->setStyleSheet("color: blue; font-size: 20px;");
    }
    else if(size == "30")
    {
        this->setStyleSheet("color: blue; font-size: 30px;");
    }
    else{
        this->setStyleSheet("color: blue;");
    }
    color = "blue";
}

void MainWindow::changeSizeS1()
{
    if(color == "black")
    {
        this->setStyleSheet("color: black; font-size: 20px;");
    }
    else if(color == "blue")
    {
        this->setStyleSheet("color: blue; font-size: 20px;");
    }
    else{
        this->setStyleSheet("font-size: 20px;");
    }
    size = "20";
}

void MainWindow::changeSizeS2()
{
    if(color == "black")
    {
        this->setStyleSheet("color: black; font-size: 30px;");
    }
    else if(color == "blue")
    {
        this->setStyleSheet("color: blue; font-size: 30px;");
    }
    else{
        this->setStyleSheet("font-size: 30px;");
    }
    size = "30";
}
void MainWindow::startFileDialog()
{
    customLabel->hasImageFlag = 0;
    test = customLabel->drawRectangleWithFill("");
    if(test != 2)
    {
    ui->horizontalSlider->show();
    ui->verticalSlider->show();
    ui->textEdit->show();
    ui->pbSave->show();
    }

}


//void MainWindow::paintEvent(QPaintEvent *event)
//{
  //  QPainter painter(&pix);
    //painter.setPen(QPen(Qt::blue));
   // painter.drawRect(5, 5, 100, 100);
   // ui->label->setPixmap(pix);
//}
QString MainWindow::textInEdit(){
    return ui->textEdit->toPlainText();
}



MainWindow::~MainWindow()
{
    delete ui;
}


