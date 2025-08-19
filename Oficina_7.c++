#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    float num, metade,quadrado;

    cout << "Insira o valor:";
    cin >> num;
    if (num > 0)
    {
        metade = num /2;
        cout << "A metade do valor é igual a " << fixed << setprecision(2) << metade;
    }else if (num < 0)
    {
        quadrado = num *num;
        cout << "O quadrado do valor é igual a " << fixed << setprecision(2)<< quadrado;
    }
    
    return 0;
    
}