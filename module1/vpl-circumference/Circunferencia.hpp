#include <iostream>
#include <math.h>

struct Circunferencia {
    double xc, yc, raio;

    double calcularArea();

    bool possuiIntersecao(Circunferencia* c);

    Circunferencia(double xc, double yc, double raio);
};