#include "Servico.h"


Servico::Servico(){

}
Servico::Servico(char* cliente, bool cabelo, bool barba, int cadeira, QDate data, QTime hora){
    strcpy(this->cliente, cliente);
    this->cabelo = cabelo;
    this->barba = barba;
    this->cadeira = cadeira;
    this->data = data;
    this->hora = hora;
}

Servico::~Servico(){

}

char* Servico::getCliente() {
    return cliente;
}

void Servico::setCliente(char* cliente) {
    strcpy(this->cliente, cliente);
}


bool Servico::getCabelo(){

    return cabelo;
}
bool Servico::getBarba(){

    return barba;
}

int Servico::getCadeira(){

    return cadeira;
}
QDate Servico::getData(){

    return data;
}
QTime Servico::getHora(){

    return hora;
}

QString Servico::getServicos(bool cabelo, bool barba){

    if (cabelo == 1 && barba == 0){

        return "Cabelo";

    } else if (cabelo == 0 && barba == 1) {

        return "Barba";
    } else {

        return "Cabelo & Barba";
    }
}
