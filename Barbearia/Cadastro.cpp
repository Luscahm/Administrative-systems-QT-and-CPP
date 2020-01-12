

#include "Cadastro.h"
#include "Servico.h"


Cadastro::Cadastro()
{
}

Cadastro::~Cadastro()
{
}

QString Cadastro::gravaFuncionario(Profissional *p)
{
    QString deu_certo;
    ofstream ofs("Funcionario.txt", ios::app);

    if(ofs){
        ofs << p->getNome() << endl;
        ofs << p->getCpf() << endl;
        ofs << p->getCargo() << endl;
        ofs << p->getSalario() << endl;
        ofs << p->getCadeira() << endl;

        deu_certo = "Gravado com sucesso";
    }

    else
    {
        deu_certo = "Erro ao gravar";
    }
    ofs.close();
    return deu_certo;
}

QString Cadastro::gravaCliente(Cliente *c)
{
    QString deu_certo;
    ofstream ofs("Cliente.txt", ios::app);


    if(ofs)
    {


        ofs << c->getNome() << endl;
        ofs << c->getContato() << endl;
        ofs << c->getCpf() << endl;


        deu_certo = "Gravado com sucesso";
    }

    else
    {
        deu_certo = "Erro ao gravar";
    }
    ofs.close();
    return deu_certo;
}

bool Cadastro::comparaHorario(Servico *a, Servico *b){
    if(a->getData().day() == b->getData().day()){
        return (a->getHora() < b->getHora());
    }else{
        return(a->getData().day() < b->getData().day());
    }
}

void Cadastro::ordenaServicos(){
    //ordenando os servicos cadastrados dentro do arquivo txt.

    vector<Servico*> aux;
    Servico *s;
    ifstream ifs("Servicos.txt");

    if(ifs.is_open()){
        char nome[30];
        int dia, mes, ano, hora, minuto;
        int cadeira;
        bool cabelo;
        bool barba;

        ifs >> nome;
        ifs >> cabelo;
        ifs >> barba;
        ifs >> cadeira;
        ifs >> dia;
        ifs >> mes;
        ifs >> ano;
        ifs >> hora;
        ifs >> minuto;

        while(ifs.good()){
            QDate data = QDate(ano, mes, dia);
            QTime horario = QTime(hora, minuto);

            s = new Servico(nome, cabelo, barba, cadeira, data, horario);
            aux.push_back(s);

            ifs >> nome;
            ifs >> cabelo;
            ifs >> barba;
            ifs >> cadeira;
            ifs >> dia;
            ifs >> mes;
            ifs >> ano;
            ifs >> hora;
            ifs >> minuto;
        }
    }
    ifs.close();

    sort(aux.begin(),aux.end(), comparaHorario);

    ofstream ofs("Servicos.txt");

    for(int i=0; i < aux.size(); i++){
        ofs << aux[i]->getCliente() << endl;
        ofs << aux[i]->getCabelo() << endl;
        ofs << aux[i]->getBarba() << endl;
        ofs << aux[i]->getCadeira() <<endl;
        ofs << aux[i]->getData().day() << endl;
        ofs << aux[i]->getData().month() << endl;
        ofs << aux[i]->getData().year() << endl;
        ofs << aux[i]->getHora().hour() << endl;
        ofs << aux[i]->getHora().minute() << endl;
    }
    ofs.close();
}

QString Cadastro::gravaServico(Servico *s)
{
    QString deu_certo;
    ofstream ofs("Servicos.txt", ios::app);
    if(ofs){

        ofs << s->getCliente() << endl;
        ofs << s->getCabelo() << endl;
        ofs << s->getBarba() << endl;
        ofs << s->getCadeira() << endl;
        ofs << s->getData().day() << endl;
        ofs << s->getData().month() << endl;
        ofs << s->getData().year() << endl;
        ofs << s->getHora().hour() << endl;
        ofs << s->getHora().minute() << endl;

        deu_certo = "Gravado com sucesso";
    }
    else{
        deu_certo = "Erro ao gravar";
    }
    ofs.close();
    ordenaServicos();
    return deu_certo;
}


QStringList Cadastro::listaClientes(){

    ifstream ifs("Cliente.txt");
    QStringList nomes;
    char nome[30];
    int contato;
    int cpf;


    if(ifs.is_open()){

        ifs >> nome;
        ifs >> contato;
        ifs >> cpf;

        while(ifs.good()){

           nomes << nome;

           ifs >> nome;
           ifs >> contato;
           ifs >> cpf;
        }
    }
    ifs.close();

    return nomes;
}
