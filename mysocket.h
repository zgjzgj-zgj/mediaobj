#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTcpSocket>
#include <QByteArray>

class mysocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit mysocket(QObject *parent = nullptr);

private slots:
    void tcpreadyread();


signals:
    void SigTcpUi(QByteArray ba);

};

#endif // MYSOCKET_H
