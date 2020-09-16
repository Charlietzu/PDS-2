#include <iostream>
#include "List.hpp"

using namespace std;

void imprimeTamanho(int num){
    cout << num << endl;
}

int main(){
    List *L = new List();
    int N, K;

    cin >> N >> K;

    for(int i = 0; i <= N; i++){
        L->insert(i);
    }

    L->print();

    imprimeTamanho(L->_size);

    for(int i = 0; i < K; i++){
        L->removeFirst();
    }

    L->print();

    imprimeTamanho(L->_size);

    for(int i = L->_size; i >= 0; i--){
        if(i % 2 == 0) {
            L->remove(i);
        }
    }

    L->print();

    imprimeTamanho(L->_size);

    L->clearList();

    delete L;
	return 0;
}