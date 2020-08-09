#include <iostream>
using namespace std;

int main(){
    int row = 0;
    cout << "Digite um número: ";
    cin >> row;
    
    for(int i = 0; i < row; i++){
       for(int j = 0; j <= i; j++){
            cout << "*";
       }
        cout << "\n";
    }
    
    for(int i = row - 1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}