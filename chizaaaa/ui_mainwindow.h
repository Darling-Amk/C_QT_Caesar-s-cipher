/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *input;
    QTextEdit *find_word;
    QPushButton *find_button;
    QTextEdit *output;
    QPushButton *find_all;
    QSplitter *splitter;
    QSplitter *splitter_4;
    QTextEdit *open_link;
    QPushButton *openButton;
    QLabel *l3;
    QTextEdit *link;
    QPushButton *saveButton;
    QLabel *l4;
    QSplitter *splitter_3;
    QLabel *l1;
    QLabel *l2;
    QSplitter *splitter_2;
    QRadioButton *chiz;
    QRadioButton *vine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-chizaaaa-Desktop_Qt_6_0_2_MinGW_64_bit-Release/release/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        input = new QTextEdit(centralwidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(190, 10, 601, 51));
        find_word = new QTextEdit(centralwidget);
        find_word->setObjectName(QString::fromUtf8("find_word"));
        find_word->setGeometry(QRect(190, 70, 141, 41));
        find_button = new QPushButton(centralwidget);
        find_button->setObjectName(QString::fromUtf8("find_button"));
        find_button->setGeometry(QRect(340, 80, 121, 21));
        output = new QTextEdit(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(190, 110, 601, 411));
        find_all = new QPushButton(centralwidget);
        find_all->setObjectName(QString::fromUtf8("find_all"));
        find_all->setGeometry(QRect(470, 80, 121, 21));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(190, 520, 601, 31));
        splitter->setOrientation(Qt::Horizontal);
        splitter_4 = new QSplitter(splitter);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        open_link = new QTextEdit(splitter_4);
        open_link->setObjectName(QString::fromUtf8("open_link"));
        splitter_4->addWidget(open_link);
        openButton = new QPushButton(splitter_4);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        splitter_4->addWidget(openButton);
        l3 = new QLabel(splitter_4);
        l3->setObjectName(QString::fromUtf8("l3"));
        splitter_4->addWidget(l3);
        link = new QTextEdit(splitter_4);
        link->setObjectName(QString::fromUtf8("link"));
        splitter_4->addWidget(link);
        saveButton = new QPushButton(splitter_4);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        splitter_4->addWidget(saveButton);
        splitter->addWidget(splitter_4);
        l4 = new QLabel(centralwidget);
        l4->setObjectName(QString::fromUtf8("l4"));
        l4->setGeometry(QRect(70, 520, 121, 31));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(10, 10, 171, 101));
        splitter_3->setOrientation(Qt::Vertical);
        l1 = new QLabel(splitter_3);
        l1->setObjectName(QString::fromUtf8("l1"));
        l1->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(l1);
        l2 = new QLabel(splitter_3);
        l2->setObjectName(QString::fromUtf8("l2"));
        l2->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(l2);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(620, 80, 168, 19));
        splitter_2->setOrientation(Qt::Horizontal);
        chiz = new QRadioButton(splitter_2);
        chiz->setObjectName(QString::fromUtf8("chiz"));
        chiz->setEnabled(true);
        chiz->setCursor(QCursor(Qt::CrossCursor));
        chiz->setTabletTracking(false);
        chiz->setAcceptDrops(false);
        chiz->setChecked(true);
        splitter_2->addWidget(chiz);
        vine = new QRadioButton(splitter_2);
        vine->setObjectName(QString::fromUtf8("vine"));
        vine->setCursor(QCursor(Qt::CrossCursor));
        splitter_2->addWidget(vine);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        find_button->setText(QCoreApplication::translate("MainWindow", "Show with word", nullptr));
        find_all->setText(QCoreApplication::translate("MainWindow", "Show all", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        l3->setText(QCoreApplication::translate("MainWindow", "name to save", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        l4->setText(QCoreApplication::translate("MainWindow", "Name to open", nullptr));
        l1->setText(QCoreApplication::translate("MainWindow", "Input text", nullptr));
        l2->setText(QCoreApplication::translate("MainWindow", "Search word", nullptr));
        chiz->setText(QCoreApplication::translate("MainWindow", "en", nullptr));
        vine->setText(QCoreApplication::translate("MainWindow", "ru", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
