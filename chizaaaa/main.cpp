#include "mainwindow.h"

#include <QDebug>
#include <QString>
#include <QChar>

#include<QList>
#include <QLabel>
#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Set color style

    //QFile styleSheetFile("D:/c++/qt/chizaaaa/SyNet.qss");
    QFile styleSheetFile(QCoreApplication::applicationDirPath()+"/1.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    //qDebug()<<styleSheet;
    a.setStyleSheet(styleSheet);

    MainWindow w;
    w.show();


    return a.exec();


}
