#ifndef TP3_EX2_H
#define TP3_EX2_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>

class Ex2: public QMainWindow {
Q_OBJECT
private:
    QPushButton *qPushButton;
public:
    Ex2(QWidget* parent = nullptr);
};


#endif //TP3_EX2_H
