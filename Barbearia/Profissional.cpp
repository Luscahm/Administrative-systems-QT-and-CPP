#include "Profissional.h"

Profissional::Profissional(char* nome, int cpf, char* cargo, float salario, int cadeira) : Pessoa(nome, cpf){
    strcpy(this->cargo, cargo);

    this->salario = salario;
    this->cadeira = cadeira;
}

Profissional::~Profissional() {

}

char* Profissional::getCargo() {
    return cargo;
}

void Profissional::setCargo(char* cargo) {
    strcpy(this->cargo, cargo);
}

float Profissional::getSalario() {
    return salario;
}

void Profissional::setSalario(float salario) {
    Profissional::salario = salario;
}

int Profissional::getCadeira() {
    return cadeira;
}

void Profissional::setCadeira(int cadeira) {
    Profissional::cadeira = cadeira;
}
