#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->textEdit, &QTextEdit::textChanged, this, &MainWindow::wordsCounter);
    ui->S_counter->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wordsCounter()
{
    QString string = ui->textEdit->toPlainText();
    int i = string.length() - 1;
    if(string[i] == ' ' && string[i-1] != ' '){
        int counter = string.split(" ").count();
        ui->S_counter->setValue(counter -1);
    }
    if(string[i] == '.'){
        ui->S_counter->setValue(ui->S_counter->value()+1);
    }
}

