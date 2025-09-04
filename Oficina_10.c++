#include <iostream>
using namespace std;

// Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou
// se são iguais.

int main(){
    int num1,num2;
    
    cout << "Digite o primeiro número:";
    cin >> num1;

    cout << "Digite o segundo número:";
    cin >> num2;

    if (num1 < num2){
        cout << "Menor: " << num1 <<endl;
        cout << "Maior: " << num2 <<endl;
    }else if (num1 > num2){
        cout << "Menor: " << num2 <<endl;
        cout << "Maior: " << num1 <<endl;
    }else{
        cout << "Os números são iguais";
    }
    
    return 0;
    
    

}