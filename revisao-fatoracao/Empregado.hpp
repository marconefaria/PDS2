#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
using namespace std;

class Empregado {
	
  public:
    double _salarioHora;  
    std::string _nome;
    double _horasTrabalhadas;
    static constexpr int MIN_HORAS = 8;

    double pagamentoMes(double horasTrabalhadas) {
 
      double copia = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > MIN_HORAS) {
        copia += (horasTrabalhadas - MIN_HORAS) / 2;
      }
	  return copia * _salarioHora;
    }

    virtual void print(){
      std::cout << "Nome: " << this->_nome << std::endl;
      std::cout << "Salario Mes: " << this->pagamentoMes(this->_horasTrabalhadas) << std::endl;
    }
	
};

#endif