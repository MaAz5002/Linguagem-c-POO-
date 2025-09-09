#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// a) peso = 200 e altura=1.6 - Mensagem: PESO MORBIDO
// b) peso = 65 e altura=1.7 - Mensagem:PESO NORMAL
// c) sua altura e seu peso - Mensagem: SOBRE PESO
float imc(float alt,float peso){
    return peso/(alt *alt);
}

int main(){
    float peso,altura,resultado;

    cout << "\nPESO: ";
    cin >> peso;
    cout << "\nALTURA: ";
    cin >> altura;

    resultado = imc(altura,peso);

    if(resultado <= 25){
        cout << "Seu IMC é: "<<fixed<<setprecision(1)<< resultado<<endl;
        cout << "Peso normal";
    }else if (resultado <= 30)
    {   cout << "Seu IMC é: "<<fixed<<setprecision(1)<< resultado<<endl;
        cout << "Sobre Peso";
    }else if (resultado <= 40)
    {   cout << "Seu IMC é: "<<fixed<<setprecision(1)<< resultado<<endl;
        cout << "Obeso";
    }else{
        cout << "Seu IMC é: "<<fixed<<setprecision(1)<< resultado<<endl;
        cout << "Obeso Morbido";
    }
    
    

}