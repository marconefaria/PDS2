#include "Circunferencia.hpp"
#include <math.h>

Circunferencia::Circunferencia(double xc, double yc, double r){
    _xc = xc;
    _yc = yc;
    _r = r;
}

double Circunferencia::calcularArea(){
    return PI*(pow(_r,2));
}

bool Circunferencia::possuiIntersecao(Circunferencia *c){
    double verifica = 0;
    verifica = sqrt(pow(c->_xc - _xc, 2) - pow(c->_yc - _yc, 2));
    if(verifica <= c->_r + _r){
        return true;
    }else{
        return false;
    }
}