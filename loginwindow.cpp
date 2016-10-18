#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QMessageBox"
#include "cstdlib"
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_buttonLogin_clicked()
{
    if(ui->inputUsername->text()=="admin")
    {
        if(ui->inputPassword->text()=="admin")
        {
            QMessageBox mb(this);
            mb.setText("登录成功，欢迎回来"+ui->inputUsername->text());
            mb.setWindowTitle("登录");
            mb.addButton("确定", QMessageBox::AcceptRole);
            mb.exec();
            return;
        }
    }
    QMessageBox mb(this);
    mb.setText("登录失败，用户名或密码错误");
    mb.setWindowTitle("登录");
    mb.addButton("确定", QMessageBox::RejectRole);
    mb.exec();
}

void LoginWindow::on_buttonExit_clicked()
{
    std::exit(0);
}
