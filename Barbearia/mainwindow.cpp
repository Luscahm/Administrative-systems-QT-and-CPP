#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace  std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ifstream ifs("Servicos.txt");

    ui->tbwServicos->setColumnCount(5);
    QStringList header = {"Cliente", "Hora", "Data", "Cadeira",  "Serviços"};


    ui->tbwServicos->setHorizontalHeaderLabels(header);

    ui->tbwServicos->setColumnWidth(0, 100); // define coluna e o tamanho dela
    ui->tbwServicos->setColumnWidth(1, 100);
    ui->tbwServicos->setColumnWidth(2, 100);
    ui->tbwServicos->setColumnWidth(3, 100);
    ui->tbwServicos->setColumnWidth(4, 150);

    if(ifs.is_open()){

        int linha = 0;

        char cliente[30];

        int dia, mes, ano, hora, minuto;
        int cadeira;
        bool cabelo;
        bool barba;


        //leitura do arquivo:
        ifs >> cliente;
        ifs >> cabelo;
        ifs >> barba;
        ifs >> cadeira;
        ifs >> dia;
        ifs >> mes;
        ifs >> ano;
        ifs >> hora;
        ifs >> minuto;




        while(ifs.good()){
            ui->tbwServicos->insertRow(linha); //insere a linha de numero armazenado na linha

            QString sHora = QString::number(hora).rightJustified(2, '0') + ":" + QString::number(minuto).rightJustified(2, '0'); //formatando o horario
            QString sData = QString::number(dia).rightJustified(2, '0') + "/" + QString::number(mes).rightJustified(2, '0') + "/" + QString::number(ano); // formatando a data

            //inserindo o que foi lido do arquivo na tabela, de linha nº armazenado na variavel "linha"
            ui->tbwServicos->setItem(linha, 0, new QTableWidgetItem(cliente));
            ui->tbwServicos->setItem(linha, 1, new QTableWidgetItem(sHora));
            ui->tbwServicos->setItem(linha, 2, new QTableWidgetItem(sData));
            ui->tbwServicos->setItem(linha, 3, new QTableWidgetItem(QString::number(cadeira)));
            ui->tbwServicos->setItem(linha, 4, new QTableWidgetItem(Servico::getServicos(cabelo, barba)));

            //lendo os proximos dados do arquivo txt
            ifs >> cliente;
            ifs >> cabelo;
            ifs >> barba;
            ifs >> cadeira;
            ifs >> dia;
            ifs >> mes;
            ifs >> ano;
            ifs >> hora;
            ifs >> minuto;

            linha++;
        }
    }
    ifs.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_novoFuncionario_triggered()
{
    //abrindo a tela de cadastro de funcionario
    NewFuncionario *tela = new NewFuncionario;
    tela->show();
}

void MainWindow::on_adicionarCliente_triggered()
{
    //abrindo a tela de cadastro de cliente
    NewCliente *cliente = new NewCliente;
    cliente->show();
}

void MainWindow::on_buscarCliente_triggered()
{
    //abrindo a tela de visualização de cliente
    viewCliente *cliente = new viewCliente;
    cliente->show();
}

void MainWindow::on_adicionarServico_triggered(){

    //abrindo a tela de adicionar serviço
    NewServico *add_serv = new NewServico;
    add_serv->show();
}



void MainWindow::on_excluirFuncionario_triggered()
{
    //abrindo a tela de excluir funcionario
    viewfuncionario *lista_func = new viewfuncionario;
    lista_func -> show();
}

void MainWindow::on_actionAtualizar_triggered()
{

    //função responsavel por atualizar a tabela de serviços

    ui->tbwServicos->setRowCount(0); // excluindo todas as linhas da coluna

    ifstream ifs("Servicos.txt"); // abrindo o arquivo txt

    if(ifs.is_open()){

        int linha = 0;

        char cliente[30];

        int dia, mes, ano, hora, minuto;
        int cadeira;
        bool cabelo;
        bool barba;


        //leitura do arquivo:
        ifs >> cliente;
        ifs >> cabelo;
        ifs >> barba;
        ifs >> cadeira;
        ifs >> dia;
        ifs >> mes;
        ifs >> ano;
        ifs >> hora;
        ifs >> minuto;




        while(ifs.good()){
            ui->tbwServicos->insertRow(linha); //insere a linha de numero armazenado na linha

            QString sHora = QString::number(hora).rightJustified(2, '0') + ":" + QString::number(minuto).rightJustified(2, '0'); //formatando o horario
            QString sData = QString::number(dia).rightJustified(2, '0') + "/" + QString::number(mes).rightJustified(2, '0') + "/" + QString::number(ano); // formatando a data

            //inserindo o que foi lido do arquivo na tabela, de linha nº armazenado na variavel "linha"
            ui->tbwServicos->setItem(linha, 0, new QTableWidgetItem(cliente));
            ui->tbwServicos->setItem(linha, 1, new QTableWidgetItem(sHora));
            ui->tbwServicos->setItem(linha, 2, new QTableWidgetItem(sData));
            ui->tbwServicos->setItem(linha, 3, new QTableWidgetItem(QString::number(cadeira)));
            ui->tbwServicos->setItem(linha, 4, new QTableWidgetItem(Servico::getServicos(cabelo, barba)));

            //lendo os proximos dados do arquivo txt
            ifs >> cliente;
            ifs >> cabelo;
            ifs >> barba;
            ifs >> cadeira;
            ifs >> dia;
            ifs >> mes;
            ifs >> ano;
            ifs >> hora;
            ifs >> minuto;

            linha++;
        }
    }
    ifs.close();
}

void MainWindow::on_actionAjuda_triggered()
{
    //abrindo a tela de informações do programa.

     QMessageBox::information(this, "Ajuda", "  Esse programa guarda os clientes que ja frequentaram esse estabelecimento, podendo editar eles,"
                                         "alem de funcionarios podendo tambem editar-los e/ou excluir-los. Alem  também da agenda de serviços a "
                                         "ser feito. \n"
                                         "  Para agendar algo, clicar no menu 'serviços' e no sub-menu 'agendar',ou no icone de serviços na toolbar.'"
                                         "Após agendar algo, é necessario atualizar a agenda, clicando no menu 'configurações' e no sub-menu  atualizar agenda \n"
                                         "  Feito pelos alunos:\n  Caique Rocha \n  Carlos André \n  Juan Pablo \n  Lucas Marchiori \n  Rafael tury\n"
                                         "  Para a matéria de POO, ministrada pelo professor Delano ");
}
