#include "viewcliente.h"
#include "ui_viewcliente.h"

viewCliente::viewCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewCliente)
{


    ui->setupUi(this);

    ifstream ifs("Cliente.txt");

    ui->tbwCliente->setColumnCount(3);

    //Lista com itens do cabeçalho
    QStringList header = {"Nome", "Contato", "CPF"};

    // Cria o cabeçalho
    ui->tbwCliente->setHorizontalHeaderLabels(header);

    // Configura o tamanho da coluna e quantas linhas terá
    ui->tbwCliente->setColumnWidth(0, 155);
    ui->tbwCliente->setColumnWidth(1, 155);
    ui->tbwCliente->setColumnWidth(1, 150);

    if(ifs.is_open()){

        int linha = 0;
        char nome[30];
        int contato;
        int cpf;

        ifs >> nome;
        ifs >> contato;
        ifs >> cpf;

        while(ifs.good()){


           // Insere  uma linha nova
           ui->tbwCliente->insertRow(linha);

           // Adiciona nova celula
           ui->tbwCliente->setItem(linha, 0, new QTableWidgetItem(nome));
           ui->tbwCliente->setItem(linha, 1, new QTableWidgetItem(to_string(contato).c_str()));
           ui->tbwCliente->setItem(linha, 2, new QTableWidgetItem(to_string(cpf).c_str()));

           ifs >> nome;
           ifs >> contato;
           ifs >> cpf;

           linha++;

        }

    }
    ifs.close();
}

viewCliente::~viewCliente()
{
    delete ui;
}



void viewCliente::on_btnBuscar_clicked()
{
    ui->tbwCliente->setRowCount(0); // limpando a tabela

    QString Qnome = ui->edtBuscar->text();
    char char_nome[30];
    strcpy(char_nome, Qnome.toStdString().c_str()); //transforma o nome de QString para array de char
    ifstream ifs("Cliente.txt");

        if (ifs.is_open())
        {

            int linha = 0;
            char nome[30];
            int contato;
            int cpf;
            bool achou = false;

            ifs >> nome;
            ifs >> contato;
            ifs >> cpf;

            while (ifs.good() && !achou )
            {
                if (!strcmp(char_nome, "")) //se o usuario não digitou nada, irá voltar a tabela ao normal
                {
                    ui->tbwCliente->insertRow(linha);

                    ui->tbwCliente->setItem(linha, 0, new QTableWidgetItem(nome));
                    ui->tbwCliente->setItem(linha, 1, new QTableWidgetItem(to_string(contato).c_str()));
                    ui->tbwCliente->setItem(linha, 2, new QTableWidgetItem(to_string(cpf).c_str()));

                    ifs >> nome;
                    ifs >> contato;
                    ifs >> cpf;
                    linha++;
                }
                else
                {
                    if (!strcmp(char_nome, nome)) //se o nome do arquivo for igual ao inserido pelo usuario, adiciona ele na tabela
                    {

                        ui->tbwCliente->insertRow(linha);

                        ui->tbwCliente->setItem(linha, 0, new QTableWidgetItem(nome));
                        ui->tbwCliente->setItem(linha, 1, new QTableWidgetItem(to_string(contato).c_str()));
                        ui->tbwCliente->setItem(linha, 2, new QTableWidgetItem(to_string(cpf).c_str()));

                        achou = true;




                    }
                    else // se não, le as proximas linhas
                    {
                        ifs >> nome;
                        ifs >> contato;
                        ifs >> cpf;
                    }
                }

            }
        }
        ifs.close();
}

void viewCliente::on_pushButton_clicked()
{
    remove("Cliente.txt"); //apagando o txt de servicos, para poder inserir o novo com modificações.

    int qtd_linhas;
    qtd_linhas = ui->tbwCliente->rowCount(); // quantidade de linhas da tabela.

    Cliente* c;

    int linha = 0;
    char nome[30];
    int contato;
    int cpf;

    QString qnome;
    QString qcpf;
    QString qcontato;

    for(int i = 0; i< qtd_linhas; i++)
    {
        //lendo informaçoes
        qnome = ui->tbwCliente->item(linha,0)->text();
        qcontato = ui->tbwCliente->item(linha,1)->text();
        qcpf = ui->tbwCliente->item(linha,2)->text();


         //abaixo convertendo de QString para os tipos necessarios
        strcpy(nome, qnome.toStdString().c_str());
        cpf = qcpf.toInt();
        contato = qcontato.toInt();

        c = new Cliente(nome, cpf, contato); // criando um objeto da Classe cliente com as informações recebidas
        Cadastro cad;
        cad.gravaCliente(c); //gravando o objeto no arquivo
        linha++;
      }
}
