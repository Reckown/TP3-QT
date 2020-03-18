#include <QtWidgets/QVBoxLayout>
#include "Ex2.h"

Ex2::Ex2(QWidget *parent) {
    this->setWindowTitle("IHM");
    this->setFixedSize(600,400);
    QWidget *parent1 = new QWidget();
    QVBoxLayout *qvBoxLayout = new QVBoxLayout;

    qPushButton = new QPushButton(this);


}
