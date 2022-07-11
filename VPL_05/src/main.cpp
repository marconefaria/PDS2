#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Estudante.hpp"

using namespace std;
#define CAPACIDADE 10

int main() {
    string nome;
    int matricula, cont = 0, posicao_maximo;
    float notas[5], aux = 0;

    Estudante estudantes[CAPACIDADE];
    float _rsg[CAPACIDADE], _rsg_ordenado[3], rsg;

    while(cont < CAPACIDADE){
        cin >> matricula >> nome;
        estudantes[cont].matricula = matricula;
        estudantes[cont].nome = nome;

        for(int i = 0; i < 5; i++){
            cin >> notas[i];
            estudantes[cont].notas[i] = notas[i];
        }

        _rsg[cont] = estudantes[cont].calcularRSG();
        cont++;
    }

    for (int i = 0; i < CAPACIDADE; ++i) {
        int indiceMaior = i;
        for (int j = i+1; j < CAPACIDADE; ++j) {
            if (_rsg[j] > _rsg[indiceMaior]) {
                indiceMaior = j;
            }
        }
        aux = _rsg[i];
        _rsg[i] = _rsg[indiceMaior];
        _rsg[indiceMaior] = aux;
    }

    for(int i = 0; i < 3; i++){
        _rsg_ordenado[i] = _rsg[i];
    }
    
   cont = 0;
   for(int j = 0; j < 3; j++){
        for(int i = 0; i < CAPACIDADE; i++){
            if(cont == 3){
                break;
            }
            if((estudantes[i].calcularRSG() == _rsg_ordenado[j]) && (estudantes[i].matricula != matricula) && (i >= j)){
                matricula = estudantes[i].matricula;
                cout << estudantes[i].matricula << " ";
                cout << estudantes[i].nome << " ";
                std::cout << std::fixed;
                std::cout << std::setprecision(2) << estudantes[i].calcularRSG() << std::endl;
                cont++;
            }
        }
    }
}