#include "Circunferencia.hpp"
#define PI 3.14

double Circunferencia::calcularArea(){
    return PI * (raio * raio);
}

bool Circunferencia::possuiIntersecao(Circunferencia* c){
    double distanciaCentro = sqrt(pow((xc - c->xc),2) - pow((yc - c->yc),2));
    double somaRaios = raio + c->raio;

    return distanciaCentro <= somaRaios;
}

Circunferencia::Circunferencia(double xc, double yc, double raio){
    Circunferencia::xc = xc;
    Circunferencia::yc = yc;
    Circunferencia::raio = raio;
}