
// 2. Calcular a média aritmética de 10 números inteiros.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int soma,num1,num2;

    cout<<"Insira o primeiro numero inteiro: ";
    cin >> num1;
    cout<<"Insira o segundo numero inteiro: ";
    cin >> num2;
    
    soma = num1 + num2;
    if (soma > 0)
    {
        soma *= 3;
        cout << soma;
    }else{
        cout << "Os números não sao positivos\n"<< soma;
    }
    
    return 0;

}