#include "newservico.h"
#include "ui_newservico.h"


NewServico::NewServico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewServico)
{
    ui->setupUi(this);

    QStringList wordList = Cadastro::listaClientes();



    QCompleter *completer = new QCompleter(wordList, ui->Nome);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->Nome->setCompleter(completer);

    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setMinimumDate(QDate::currentDate());

    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(2);

    ui->timeEdit->setMinimumTime(QTime(8, 0, 0, 0));
    ui->timeEdit->setMaximumTime(QTime(20, 0, 0, 0));

}

NewServico::~NewServico()
{
    delete ui;
}

void NewServico::on_btnSalvar_clicked()
{
    Servico *s;
    char str_nome[30];
    bool cabelo = ui->cbCabelo->isChecked();
    bool barba = ui->cbBarba->isChecked();
    int cadeira = ui->spinBox->value();
    QDate data = ui->dateEdit->date();
    QTime hora = ui->timeEdit->time();

    strcpy(str_nome, ui -> Nome -> text().toStdString().c_str());

    s = new Servico(str_nome, cabelo, barba, cadeira, data, hora);

    if(ui->Nome->text() == ""){

        QMessageBox::warning(this, "Atenção", "Nome não pode ser vazio !");

    } else  if (!ui->cbCabelo->isChecked() && !ui->cbBarba->isChecked()){

        QMessageBox::warning(this, "Atenção", "Escolha pelo menos um serviço !");
    }

    Cadastro cad;

    ui -> Nome -> clear();

    ui ->gravou ->setText(cad.gravaServico(s));
}
