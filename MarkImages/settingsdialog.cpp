#include "settingsdialog.h"

settingsdialog::settingsdialog()
{
    QLabel* colorText = new QLabel("pick a bakground color");
    QLabel* sizeText = new QLabel("pick a font size");

    QButtonGroup *bgColor = new QButtonGroup(this);

    QRadioButton *white = new QRadioButton();
    QRadioButton *blue = new QRadioButton();

    bgColor->addButton(white);
    white->setStyleSheet("QRadioButton { background-color: white; }");
    bgColor->addButton(blue);
    blue->setStyleSheet("QRadioButton { background-color: blue; }");

    white->setChecked(true);

    QButtonGroup *fontSize = new QButtonGroup(this);

    QRadioButton *s1 = new QRadioButton();
    QRadioButton *s2 = new QRadioButton();
    fontSize->addButton(s1);
    fontSize->addButton(s2);




    QHBoxLayout* l1 = new QHBoxLayout;
    QHBoxLayout* l2 = new QHBoxLayout;
    QVBoxLayout* l3 = new QVBoxLayout;


    l1->addWidget(colorText);
    l1->addWidget(white);
    l1->addWidget(blue);

    l2->addWidget(sizeText);
    l2->addWidget(s1);
    l2->addWidget(s2);

    l3->addLayout(l1);
    l3->addLayout(l2);

    setLayout(l3);

    connect(white, &QRadioButton::clicked, this, &settingsdialog::signalingBlack);
    connect(blue, &QRadioButton::clicked, this, &settingsdialog::signalingBlue);

    connect(s1, &QRadioButton::clicked, this, &settingsdialog::signalingS1);
    connect(s2, &QRadioButton::clicked, this, &settingsdialog::signalingS2);
}

void settingsdialog::signalingBlack()
{
    emit changedColorBlack();
}

void settingsdialog::signalingBlue()
{
    emit changedColorBlue();
}

void settingsdialog::signalingS1()
{
    emit changedSizeS1();
}

void settingsdialog::signalingS2()
{
    emit changedSizeS2();
}
