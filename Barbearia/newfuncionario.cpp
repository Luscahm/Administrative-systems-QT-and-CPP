#include "newfuncionario.h"
#include "ui_newfuncionario.h"

NewFuncionario::NewFuncionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewFuncionario)
{
    ui->setupUi(this);
}

NewFuncionario::~NewFuncionario()
{
    delete ui;
}

void NewFuncionario::on_btnSalvar_clicked()
{
    Profissional *p;

    char str_nome[30];
    char str_cargo[30];

    strcpy(str_nome, ui -> Nome -> text().toStdString().c_str()); //transforma o nome de QString para char
    int cpf = ui -> CPF -> text().toInt();//transforma o cpf de QString para int

    strcpy(str_cargo, ui -> Cargo -> text().toStdString().c_str());//transforma o cargo de QString para char

    int cadeira = ui ->Cadeira -> value();
    float salario = ui -> Salario -> text().toFloat();//transforma o salario de QString para float

    p = new Profissional(str_nome, cpf, str_cargo , salario, cadeira); //cria um novo objeto da classe Profisional com as informações cedidas

    Cadastro cad;
    //apagando oq foi digitado:
    ui -> Nome -> clear();
    ui -> CPF -> clear();
    ui -> Cargo -> clear();
    ui -> Cadeira -> clear();
    ui -> Salario -> clear();

    ui ->gravou ->setText(cad.gravaFuncionario(p)); //gravando e definindo o texto da label de acordo com o retorno da função
}
