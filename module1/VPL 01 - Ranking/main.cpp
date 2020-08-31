#include "Estudante.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void sortEstudantes(Estudante *_estudantes){
    Estudante auxRSG, auxMatricula;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(_estudantes[i].calcularRSG()<_estudantes[j].calcularRSG()){  //Ordenação descendente
                auxRSG=_estudantes[j];
                _estudantes[j]=_estudantes[i];
                _estudantes[i]=auxRSG;
            } else if(_estudantes[i].calcularRSG()==_estudantes[j].calcularRSG()){ //Ordenação ascendente
                if(_estudantes[i].matricula > _estudantes[j].matricula){
                    auxMatricula=_estudantes[j];
                    _estudantes[j]=_estudantes[i];
                    _estudantes[i]=auxMatricula;
                }
            }
        }
    }

    
}

int main(){
    
    Estudante *_estudantes = new Estudante[10];

    for(int i = 0; i < 10; i++){
        cin >> _estudantes[i].matricula >> _estudantes[i].nome;
        for(int j = 0; j < 5; j++){
            cin >> _estudantes[i].notas[j];
        }
    } 

    sortEstudantes(_estudantes);
    cout << fixed << setprecision(2);
    for(int i = 0; i < 3; i++){
        cout << _estudantes[i].matricula << " ";
        cout << _estudantes[i].nome << " ";
        cout << _estudantes[i].calcularRSG() << "\n";
    }

    return 0;
}