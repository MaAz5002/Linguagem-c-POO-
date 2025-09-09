#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float pesoIdeal(float alt,char sexo){

    float valorIdeal;

    if (sexo == 'm'|| sexo == 'M' ){
        valorIdeal = (72.7*alt) - 58;
    }else if (sexo == 'f'|| sexo == 'F'){
        valorIdeal = (62.1*alt) - 44.7;
    };

    return valorIdeal;

}




int main(){

    float altura,ideal;
    char sexo;

    cout << "Qual seu sexo?" << endl;
    cin >> sexo;

    cout << "Qual a sua altura atual?" << endl;
    cin >> altura;

    ideal = pesoIdeal(altura,sexo);

    cout << "O seu peso ideal é "<< fixed <<setprecision(2)<< ideal<<"Kg";

}