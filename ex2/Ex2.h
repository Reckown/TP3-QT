#ifndef TP3_EX2_H
#define TP3_EX2_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

class Ex2: public QMainWindow {
Q_OBJECT
private:
    QPushButton *qPushButton;
    QTextEdit *qTextEdit;
    QPushButton *qOpenIHM;
public:
    Ex2(QWidget* parent = nullptr);

public slots:
    void slotSetButtonName();
    void openIHM();
};


#endif //TP3_EX2_H