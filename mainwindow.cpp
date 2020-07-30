#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "commend.h"
#include "settings.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->statusBar->showMessage("button clicked");
    ui->textEdit->append("Text");
}

void MainWindow::on_pushButton_pressed()
{
    ui->statusBar->showMessage("");
}

void MainWindow::on_actionadd_triggered()
{
    ui->textEdit->append("menu0");
    dialog=new Dialog();
    dialog->show();
}

void MainWindow::on_actionmanage_commend_triggered()
{
    ui->textEdit->append("menu1");
}

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::exit(0);
}

void MainWindow::newbutton_clicked()
{
    ui->textEdit->append("but");
}

void MainWindow::on_pushButton_3_clicked()
{
    QPushButton *but=new QPushButton();
    but->setText("new");
    ui->verticalLayout->addWidget(but);
    connect(but,SIGNAL(clicked()),this,SLOT(newbutton_clicked()));
}


void MainWindow::on_actionUI_Style_triggered()
{
    Settings *setting=new Settings;
    setting->show();
}

void MainWindow::settext()
{

}
