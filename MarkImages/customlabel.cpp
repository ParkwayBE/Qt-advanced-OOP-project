#include "customlabel.h"

#include <QPainter>
#include <QFileDialog>
CustomLabel::CustomLabel(QWidget *parent)
    : QLabel(parent)
{
    QLabel* labelpixmap = new QLabel();
    QRadioButton *red = new QRadioButton("red");
    QRadioButton *blue = new QRadioButton("blue");
    QRadioButton *black = new QRadioButton("black");
    black->setChecked(true);
    QButtonGroup *radioButtonGroup = new QButtonGroup;
    radioButtonGroup->addButton(red);
    radioButtonGroup->addButton(blue);
    radioButtonGroup->addButton(black);

    QVBoxLayout* lay = new QVBoxLayout;
    lay->addWidget(labelpixmap);
    lay->addWidget(red);
    lay->addWidget(blue);
    lay->addWidget(black);
    setLayout(lay);

    connect(red, &QRadioButton::toggled, this, &CustomLabel::changeColorR);
    connect(blue, &QRadioButton::toggled, this, &CustomLabel::changeColorB);
    connect(black, &QRadioButton::toggled, this, &CustomLabel::changeColorBL);
}

int CustomLabel::drawRectangleWithFill(QString direction)
{
    if(hasImageFlag == 0)
    {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"));
    if(fileName.isEmpty())
    {

        return 2;
    }
    pixmapWithImage.load(fileName);
    pixmapWithImage = pixmapWithImage.scaled(500, 500, Qt::KeepAspectRatio);
    selectedImage = fileName;
    hasImageFlag = 1;
    }
    pixmapWithImage.load(selectedImage);
    pixmapWithImage = pixmapWithImage.scaled(500, 500, Qt::KeepAspectRatio);
    QPainter painter(&pixmapWithImage);
    painter.setBrush(QColor(255, 255, 255));
    painter.setPen(color);

    int rectWidth = pixmapWithImage.width() / 4;
    int rectHeight = pixmapWithImage.height() / 6;


    painter.drawRoundedRect(rectX, rectY, rectWidth, rectHeight, 10, 10);

    painter.setPen(color);
    painter.drawText(rectX+5, rectY+5, rectWidth, rectHeight, Qt::AlignLeft | Qt::AlignTop, direction);
    labelpixmap.setPixmap(pixmapWithImage);
    update();  // Trigger a repaint of the label
    painter.end();


    return 1;

}
void CustomLabel::handleHSliderChange(int data)
{


    rectX = pixmapWithImage.width()/100 *data;

    drawRectangleWithFill(textInImage);
}
void CustomLabel::handleVSliderChange(int data)
{


    rectY = pixmapWithImage.height()/100 *data;

    drawRectangleWithFill(textInImage);
}

void CustomLabel::changeText(QString theText){
    textInImage = theText;
    drawRectangleWithFill(theText);
}

void CustomLabel::saveImage(QString filePath){

    bool saved = pixmapWithImage.save(filePath+".PNG"); // Save as PNG format

    if (saved) {

    } else {

    }
}

void CustomLabel::changeColorR()
{
    color = "red";
    drawRectangleWithFill(textInImage);
}

void CustomLabel::changeColorB()
{
    color = "blue";
    drawRectangleWithFill(textInImage);
}

void CustomLabel::changeColorBL()
{
    color = "black";
    drawRectangleWithFill(textInImage);
}



void CustomLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);
    QPainter painter(this);
    painter.drawPixmap(0, 0, pixmapWithImage);
}
