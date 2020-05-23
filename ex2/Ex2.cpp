#include <QtWidgets/QVBoxLayout>
#include <iostream>
#include "Ex2.h"
#include "../ex1/Ex1.h"

Ex2::Ex2(QWidget *parent) {
    this->setWindowTitle("IHM");
    this->setFixedSize(600,400);
    QWidget *parent1 = new QWidget();
    QVBoxLayout *qvBoxLayout = new QVBoxLayout;

    qPushButton = new QPushButton("fils");
    qTextEdit = new QTextEdit("initial text");
    qOpenIHM = new QPushButton("Ouvrir l'ihm de l'exo 1");

    //QTextCursor cursor(this->qTextEdit->textCursor());
    //cursor.movePosition(QTextCursor::, QTextCursor::MoveAnchor, 1);

    qvBoxLayout->addWidget(qPushButton);
    qvBoxLayout->addWidget(qTextEdit);
    qvBoxLayout->addWidget(qOpenIHM);

    parent1->setLayout(qvBoxLayout);
    setCentralWidget(parent1);

    //Code pour fermer l'IHM
    //QObject::connect(qPushButton, SIGNAL(clicked()), this, SLOT(close()));

    connect(qPushButton, SIGNAL(clicked()), this, SLOT(slotSetButtonName()));
    connect(qOpenIHM, SIGNAL(clicked()), this, SLOT(openIHM()));
}

void Ex2::slotSetButtonName() {
    static int i = 0;
    i++;
    qPushButton->setText("Example");
    qTextEdit->append("Example" + QString::number(i));
    std::cout << "Example" << i << std::endl;
}

void Ex2::openIHM() {
    Ex1* ex1 = new Ex1();
    ex1->show();
}