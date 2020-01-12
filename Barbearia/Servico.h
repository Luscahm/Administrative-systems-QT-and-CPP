#ifndef SERVICO_H
#define SERVICO_H

#include <QString>
#include <QDate>

using namespace std;

class Servico{
public:

    Servico();
    Servico(char* cliente, bool cabelo, bool barba, int cadeira, QDate data, QTime hora);
    virtual ~Servico();

    char* getCliente();
    void setCliente(char *cliente);

    bool getCabelo();
    bool getBarba();
    int getCadeira();
    QDate getData();
    QTime getHora();

    static QString getServicos(bool cabelo, bool barba);


private:

    char cliente[30];
    bool cabelo;
    bool barba;
    int cadeira;
    QDate data;
    QTime hora;
};

#endif // SERVICO_H
