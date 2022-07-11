#include <sstream>
#include <string>
#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
  /*separare a string em tokens, e adicione esses grupos de espaço-vírgula-espaço entre cada token. 
  Não deve haver vírgula no final do stream. 
  Exemplo: "adf 34 12 fad 3.24 -4 df" se transforma em "adf , 34 , 12 , fad , 3.24 , -4 , df".*/
  std::string content = StreamDecorator::toString();
  std::string aux = "", c;

  for(int i=0; i < content.length();i++){
    c = content.at(i);
    aux += c;
    if(c == " "){
      aux += ", ";
    }
  }
  return aux;
}