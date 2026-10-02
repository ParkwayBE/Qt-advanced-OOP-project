#ifndef CUSTOMLABEL_H
#define CUSTOMLABEL_H

#include <QLabel>
#include <QMainWindow>
#include <QResizeEvent>

#include <QRadioButton>
#include <QButtonGroup>
#include <QVBoxLayout>
class CustomLabel : public QLabel
{
    Q_OBJECT
public:
    CustomLabel(QWidget *parent = nullptr);

    int drawRectangleWithFill(QString direction);
    int hasImageFlag = 0;
    void changeText(QString);
    QPixmap pixmapWithImage;

protected:
    void paintEvent(QPaintEvent *event) override;

public slots:
    void handleHSliderChange(int data);
    void handleVSliderChange(int data);
    void saveImage(QString filePath);
    void changeColorR();
    void changeColorB();
    void changeColorBL();

private:

    QString selectedImage;
    int rectX=0;
    int rectY=0;
    QString textInImage="";
    int defaultHpos = 0;
    QString color;
    QLabel labelpixmap;

};

#endif // CUSTOMLABEL_Hs
