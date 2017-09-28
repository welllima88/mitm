#ifndef MITM_H
#define MITM_H

#include <QMainWindow>
#include <QProcess>
//#include <QtGui>
//#include <QtWidgets/QApplication>
#include <QApplication>
#include<QtWidgets/*>


namespace Ui {
class MitM;
}

class MitM : public QMainWindow
{
    Q_OBJECT

public:
    explicit MitM(QWidget *parent = 0);
    ~MitM();




private:
    Ui::MitM *ui;

    QString password;
    //QString arguments;


public slots:

    void checkInput();

    void transceiverPressed();
    void btsPressed();
    void bscPressed();
    void wiresharkPressed();
    void sipConnectorPressed();
    void sqlBrowserPressed();

};

#endif // MITM_H