const float PI = 3.14;
struct Circunferencia{
    double _xc;
    double _yc;
    double _r;
    
    Circunferencia(double xc, double yc, double r);
    double calcularArea();
    bool possuiIntersecao(Circunferencia *c);
};