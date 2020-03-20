#include <iostream>
#include <QtWidgets/QApplication>
#include "ex1/Ex1.h"
#include "ex2/Ex2.h"


int main(int argc, char** argv) {
    QApplication app(argc, argv);
    Ex2 ex1;
    ex1.show();
    return app.exec();
    return 0;
}
