#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
	static constexpr int NUM_MESES = 12;
	double _quotaMensalVendas;

	Vendedor(std::string nome, double salarioHora, double quotaMensalVendas, double horasTrabalhadas){
      _nome = nome;
      _salarioHora = salarioHora;
      _quotaMensalVendas = quotaMensalVendas;
      _horasTrabalhadas = horasTrabalhadas;
    }

	double quotaTotalAnual() {
	  return _quotaMensalVendas * NUM_MESES;
	}

	virtual void print(){
      std::cout << "Nome: " << this->_nome << std::endl;
      std::cout << "Salario Mes: " << this->pagamentoMes(this->_horasTrabalhadas) << std::endl;
      std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
      std::cout << std::endl;
    }
};

