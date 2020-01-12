//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_PESSOA_H
#define BABERARIA_PESSOA_H

#include <QString>
using namespace std;
class Pessoa {

public:

    Pessoa();
    Pessoa(char* nome, int cpf);


    virtual ~Pessoa();

    char* getNome();

    void setNome(char *nome);

    int getCpf() const;

    void setCpf(int cpf);



private:
    char nome[30];
    int cpf;

};


#endif //BABERARIA_PESSOA_H
