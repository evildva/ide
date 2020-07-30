#include "settings.h"
#include "ui_settings.h"
#include <QDebug>

Settings::Settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_pushButton_clicked()
{
    QMenu *menu=ui->menubar->addMenu("menu");
    QAction *action=menu->addAction("exit");
    connect(action,SIGNAL(triggered()),this,SLOT(print()));
}

void Settings::print()
{
    qDebug()<<"menu"<<endl;
}
