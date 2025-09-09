#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float salarioFun(float salario){
    float salarioFinal =   salario - (salario * 0.1)  ;
    return salarioFinal;
}



int main(){

    string nome;
    float salarioB,salarioL;

    cout << "Qual seu nome?" << endl;
    cin >> nome;

    cout << "Qual o seu salário atual?" << endl;
    cin >> salarioB;

    salarioL = salarioFun(salarioB);

    cout << "   DADOS FUNCIONÁRIO   "<< endl;
    cout << "\nNOME --------- "<<nome << endl;
    cout << "\nSALÁRIO BRUTO -------- "<<fixed <<setprecision(2)<< salarioB << endl;
    cout <<"\nSALÁRIO LIQUIDO -------- "<<fixed<<setprecision(2)<< salarioL << endl;


}