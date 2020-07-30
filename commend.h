#ifndef COMMEND_H
#define COMMEND_H

#include <QDialog>
#include <QPushButton>
#include <QString>
#include <QProcess>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
};

#endif // COMMEND_H
