
// 2. Calcular a média aritmética de 10 números inteiros.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int lista[10];
    float soma = 0;

    for (int i = 0; i < 10; i++){
        cout << "Insira um numero inteiro: ";
        cin >> lista[i];
    }
    
    for (int i = 0; i < 10; i++){
        soma += lista[i];
    }

    cout << " A média dos numeros é : " <<fixed<<setprecision(1)<< soma/10;
    

    
    
    return 0;

}