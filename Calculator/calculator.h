#pragma once

#include <QtWidgets/QMainWindow>
#include <QRegularExpression>
#include "ui_calculator.h"

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = Q_NULLPTR);

private:
    Ui::CalculatorClass ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButton();
    void ChangeNumberSign();
    void ClearButtonPressed();
};
