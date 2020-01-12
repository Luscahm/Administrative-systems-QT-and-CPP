//
// Created by Caique Rocha on 25/11/19.
//

#ifndef BABERARIA_CADASTRO_H
#define BABERARIA_CADASTRO_H
#include "Profissional.h"
#include "Cliente.h"
#include "Servico.h"
#include <vector>
#include <fstream>
#include <QString>
#include <QDebug>
#include <string>
#include <algorithm>
/* classe cadastro sera responsavel por todas as telas de "adicionar" e "visualizar" do programa" */
class Cadastro {
    public:
        Cadastro();
        virtual ~Cadastro();
        QString gravaFuncionario(Profissional* p);
        QString gravaCliente(Cliente *c);
        QString gravaServico(Servico *s);
        void exibeCliente(vector<Cliente>&);
        void ordenaServicos();
        static QStringList listaClientes();

    private:
        static bool comparaHorario(Servico *a, Servico *b);
};


#endif //BABERARIA_CADASTRO_H
