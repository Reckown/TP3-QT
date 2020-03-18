

#ifndef TP3_EX1_H
#define TP3_EX1_H


#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

class Ex1 : public QMainWindow{
private:
    QProgressBar *qProgressBar;
    QSlider *qSlider;
public:
    Ex1(QWidget* parent = nullptr);

};


#endif //TP3_EX1_H
