#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QChar>
#include<QFile>
#include<QList>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_find_button_clicked()
{
    on_find_all_clicked();

    QString input_text = ui->output->toPlainText();
    QString find_word = ui->find_word->toPlainText();
    QString output;
    QString cur;
    for(int i = 0;i<input_text.size();i++){
        cur+=input_text[i];
        if(input_text[i]=='\n'){
            if(cur.indexOf(find_word) != -1){
                output+=cur;
            }

            cur = "";
        }


    }
    ui->output->setText(output);
}


void MainWindow::on_find_all_clicked()
{

    bool ind = ui->chiz->isChecked();
    //qDebug()<<ind;
    QString input_text = ui->input->toPlainText();
    input_text.replace('\n',"");
    QString output;



    QString alfen[26] = {"a" , "b" , "c" , "d" , "e" , "f" , "g" , "h" , "i" , "j" , "k" , "l" , "m" , "n" , "o" , "p" , "q" , "r" , "s" , "t" , "u" , "v" , "w" , "x" , "y" , "z"};
    QString alfEN[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

    QString alfru[33] = {"а","б","в","г","д","е","ё","ж","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я"};
    QString alfRU[33] = {"А","Б","В","Г","Д","Е","Ё","Ж","З","И","Й","К","Л","М","Н","О","П","Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ъ","Ы","Ь","Э","Ю","Я"};

    QString cur[33] , CUR[33] ;

    int max_offset = ind ? 26 :33;
    for(int i= 0;i<max_offset;i++){
        cur[i] = ind ?  alfen[i] :alfru[i];
        CUR[i] = ind ?  alfEN[i] :alfRU[i];
    }


    for(int offset = 1;offset<max_offset;offset++){
        output+=QString::number(offset)+'.';
        for(int i = 0; i<input_text.size();i++){
            int F = -1;
            for(int l = 0;l<max_offset;l++){
                if(input_text[i]==cur[l]){
                    F = 1;
                    output+= cur[(l+offset)%max_offset];
                    break;
                }
            }

            if(F!=-1){continue;};

            for(int l = 0;l<max_offset;l++){
                if(input_text[i]==CUR[l]){
                    F = 1;
                    output+= CUR[(l+offset)%max_offset];
                    break;
                }
            }
            if(F==-1){
                output+=input_text[i];
            }
        }

        output+='\n';
    }
    ui->output->setText(output);
}

void MainWindow::on_saveButton_clicked()
{
    QString link = QCoreApplication::applicationDirPath()+"/.SAVE/" + ui->link->toPlainText()+".txt";
    QString text = ui->output->toPlainText();
    qDebug()<<link;
    QFile file(link );
    QTextStream t (&file);
    if (file.open(QIODevice::WriteOnly))
    {
        t<<text;

        file.close();
        ui->statusbar->showMessage("save in "+link);
    }
    else{
        ui->statusbar->showMessage("Error save");
    }
}

void MainWindow::on_openButton_clicked()
{
    QString link = QCoreApplication::applicationDirPath()+"/.SAVE/" + ui->open_link->toPlainText()+".txt";

    QFile file(link);
    QTextStream t (&file);
    if (file.open(QIODevice::ReadOnly))
    {
        ui->input->setText(t.readAll());

        file.close();
        ui->statusbar->showMessage("open in "+link);
    }
    else{
        ui->statusbar->showMessage("Error open");
    }
}

void MainWindow::on_chiz_clicked()
{
    ui->find_button->setText("Show with word");
    ui->find_all ->setText("Show all");
    ui->l1 ->setText("Input text");
    ui->l2 ->setText("Search word");
    ui->l3 ->setText("Name to save");
    ui->l4 ->setText("Name to open");
    ui->saveButton->setText("Save");
    ui->openButton->setText("Open");
}

void MainWindow::on_vine_clicked()
{
    ui->find_button->setText("Показать с словом");
    ui->find_all ->setText("Показать все");
    ui->l1 ->setText("Исходный текст");
    ui->l2 ->setText("Исходное слово");
    ui->l3 ->setText("Имя для сохранения");
    ui->l4 ->setText("Имя для открытия");
    ui->saveButton->setText("Сохранить");
    ui->openButton->setText("Открыть");
}
