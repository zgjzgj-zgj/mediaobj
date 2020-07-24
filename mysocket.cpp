#include "mysocket.h"

mysocket::mysocket(QObject *parent) : QTcpSocket(parent)
{
    connect(this,SIGNAL(readyRead()),this,SLOT(tcpreadyread()));
}

void mysocket::tcpreadyread()
{

    QByteArray ba = this->readAll();
    qDebug()<<ba;   //readAll只能调用一次，第二次会清零
    emit SigTcpUi(ba);
    qDebug()<<"支线线程："<<QThread::currentThreadId();
}
