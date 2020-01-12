#include "viewservicos.h"
#include "ui_viewservicos.h"


viewServicos::viewServicos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewServicos)
 {
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

viewServicos::~viewServicos()
{
    delete ui;
}

void viewServicos::on_save_clicked()
{
    remove("Servicos.txt"); //apagando o txt de servicos, para poder inserir o novo com modificações.

    int qtd_linhas;
    qtd_linhas = ui->tbwServicos->rowCount(); //pegando o numero de linhas da tabela ja carregada

    Servico *s;

    char nome[30];
    float valor;
    int tempo;

    int linha = 0;

    QString qnome;
    QString qvalor;
    QString qtempo;
    for(int i = 0; i< qtd_linhas; i++)
    {
     //lendo informaçoes
     qnome = ui->tbwServicos->item(linha,0)->text();
     qvalor = ui->tbwServicos->item(linha,1)->text();
     qtempo = ui->tbwServicos->item(linha,2)->text();

     //abaixo convertendo de QString para os tipos necessarios
     strcpy(nome, qnome.toStdString().c_str());
     valor = qvalor.toFloat();
     tempo = qtempo.toInt();

     //s = new Servico(nome, valor, tempo);
     Cadastro cad;
     cad.gravaServico(s);
     linha++;
    }
}

void viewServicos::on_edit_clicked()
{

}
