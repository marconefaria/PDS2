#include <iostream>
#include <string>
#include "Estudante.hpp"

#define TAMANHO_NOTAS 5
using namespace std;

/*Estudante::Estudante(string _nome, int _matricula, float _notas[5]) {
    nome = _nome;
    matricula = _matricula;

    for(int i = 0; i < TAMANHO_NOTAS; i++){
        notas[i] = _notas[i];
    }
}*/


float Estudante::calcularRSG() {
    int soma = 0;
    for(int i = 0; i < TAMANHO_NOTAS; i++){
        soma += notas[i];
    }

    return soma/TAMANHO_NOTAS;
}