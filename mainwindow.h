#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "commend.h"
#include <QSplitter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void settext();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_pressed();

    void on_actionadd_triggered();

    void on_actionmanage_commend_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void newbutton_clicked();

    void on_actionUI_Style_triggered();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
};

#endif // MAINWINDOW_H
