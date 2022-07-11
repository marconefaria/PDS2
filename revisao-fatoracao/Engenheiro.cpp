#include <string>
#include <iostream>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
	  int _projetos;

    Engenheiro(std::string nome, double salarioHora, int projetos, double horasTrabalhadas){
      _nome = nome;
      _salarioHora = salarioHora;
      _projetos = projetos;
      _horasTrabalhadas = horasTrabalhadas;
    }

    virtual void print(){
      std::cout << "Nome: " << this->_nome << std::endl;
      std::cout << "Salario Mes: " << this->pagamentoMes(this->_horasTrabalhadas) << std::endl;
      std::cout << "Projetos: " << this->_projetos << std::endl;
      std::cout << std::endl;
    }

};

