#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    float valorCompra, resultadoF;
    int prestacao;

    cout << "Qual o valor a vista da compra?";
    cin >> valorCompra;

    cout << "A prestação sera de 2 ou 3 vezes?(2)(3)";
    cin >> prestacao;

    if (prestacao == 2)
    {
        resultadoF = valorCompra +(valorCompra * 0.1);
        cout << "O valor final da compra é " << fixed << setprecision(2) << resultadoF;
    }else if (prestacao == 3)
    {
        resultadoF = valorCompra +(valorCompra*0.2);
        cout << "O valor final da compra é " << fixed << setprecision(2) << resultadoF;
    }
    
    return 0;
    
}