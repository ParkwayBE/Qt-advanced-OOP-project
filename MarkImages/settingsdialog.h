#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QButtonGroup>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
class settingsdialog : public QDialog
{
    Q_OBJECT
public:

    settingsdialog();

public slots:
    void signalingBlack();
    void signalingBlue();
    void signalingS1();
    void signalingS2();

signals:
    void changedColorBlack();
    void changedColorBlue();

    void changedSizeS1();
    void changedSizeS2();
private:
    QLabel colorText;
    QLabel sizeText;


};

#endif // SETTINGSDIALOG_H
