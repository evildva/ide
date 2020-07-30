#include "commend.h"
#include "ui_commend.h"
#include <QFile>
#include <QTextStream>
#include <QProcess>
#include <QByteArray>
#include <QString>
#include <QDebug>
#include "mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    /*
    QFile file("/home/guil/Desktop/out.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

    QTextStream out(&file);
    out << "The magic number is: " << 49 << "\n";


    QProcess qp;
    qp.start("ls");
    qp.waitForFinished();
    QByteArray out=qp.readAllStandardOutput();
    QString str=out;
    qDebug()<<str;
    */
    MainWindow *m;
    m->settext();
}
