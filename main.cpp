#include "mainwindow.h"

#include <QApplication>

/**************************************************修改病人信息**********************************/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w;
            w.show();
    return a.exec();
}

