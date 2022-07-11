#include <sstream>
#include <string>
#include <cctype>

#include "NumberDecorator.hpp"

std::string NumberDecorator::toString() {
  /*adiciona um sinal de mais (+) na frente de cada número inteiro que aparece no stream. 
  Esse decorador também assegura que haverá sempre um espaço entre cada token to stream. 
  Exemplo: "adf    34   12 fad  3.24    -4 df" se transforma em "adf +34 +12 fad 3.24 -4 df".*/
  std::string content = StreamDecorator::toString();
  std::string aux = "", c;
  char prox;

  for(int i=0; i < content.length();i++){
    c = content.at(i);
    prox = content[i+1];

    aux += c;

    if((c == " ") && (isdigit(prox) != 0)){
      aux += "+";
    }
  }
  return aux;
}