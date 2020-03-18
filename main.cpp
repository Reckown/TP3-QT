#include <iostream>
#include <QtWidgets/QApplication>
#include "ex1/Ex1.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    Ex1 ex1;
    ex1.show();
    return app.exec();
    return 0;
}
