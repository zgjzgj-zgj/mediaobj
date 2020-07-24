#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QByteArray>
#include "mysocket.h"
#include <QTableView>
#include <QSqlQueryModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QApplication>
#include <QSqlError>
#include <QDebug>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QByteArray name="";
    QByteArray password="";
    int f1 = 0;
    void denglu(QByteArray name,QByteArray password);

private slots:
    void TcpNewConnect();
    void writeda();
    void setda(QByteArray ba);

private:
    Ui::MainWindow *ui;
    QTcpServer *mServer;
    mysocket *nsocket = new mysocket();
    QTcpSocket *mSocket;

signals:
    void sendID(QByteArray id);
    void sendPassword(QByteArray pa);


};
#endif // MAINWINDOW_H
