//
// Created by rouxt on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "Ex1.h"

Ex1::Ex1(QWidget *parent) :QMainWindow(parent) {
    this->setWindowTitle("IHM");
    this->setFixedSize(600,400);
    QWidget *parent1 = new QWidget();
    QVBoxLayout *qVBoxLayout= new QVBoxLayout;

    qProgressBar = new QProgressBar(this);
    qSlider = new QSlider(Qt::Horizontal, this);

    qVBoxLayout->addWidget(qProgressBar);
    qVBoxLayout->addWidget(qSlider);

    parent1->setLayout(qVBoxLayout);
    setCentralWidget(parent1);
}
