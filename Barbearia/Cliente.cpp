
#include "Cliente.h"
Cliente::Cliente():Pessoa()
{
}
Cliente::Cliente(char* nome, int cpf, int contato) : Pessoa(nome, cpf), contato(contato) {}

Cliente::~Cliente() {

}

int Cliente::getContato()  {
    return contato;
}

void Cliente::setContato(int contato) {
    Cliente::contato = contato;
}

