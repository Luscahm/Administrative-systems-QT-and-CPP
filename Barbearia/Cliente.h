//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_CLIENTE_H
#define BABERARIA_CLIENTE_H


#include "Pessoa.h"

class Cliente : public Pessoa {

public:
    Cliente();
    Cliente(char* nome, int cpf, int contato);


    virtual ~Cliente();

    int getContato();

    void setContato(int contado);


private:
    int contato;
};


#endif //BABERARIA_CLIENTE_H
