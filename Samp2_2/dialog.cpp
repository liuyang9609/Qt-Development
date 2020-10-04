#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_checkBox_3_clicked(bool checked)
{
    QFont font=ui->textEdit->font();
    font.setUnderline(checked);
    ui->textEdit->setFont(font);
}

void Dialog::on_checkBox_2_clicked(bool checked)
{
    QFont font=ui->textEdit->font();
    font.setItalic(checked);
    ui->textEdit->setFont(font);
}

void Dialog::on_checkBox_clicked(bool checked)
{
    QFont font=ui->textEdit->font();
    font.setBold(checked);
    ui->textEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet=ui->textEdit->palette();

    if(ui->radioButton->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else if(ui->radioButton_2->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(ui->radioButton_2->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else
        plet.setColor(QPalette::Text,Qt::black);

    ui->textEdit->setPalette(plet);
}

















