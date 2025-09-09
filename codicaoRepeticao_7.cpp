#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float cauculoSalario(float salario,int tServico){
    float salarioFinal = 0;
    
    if (tServico >= 5){
        salarioFinal = salario * 1.20;
    }else{
        salarioFinal = salario * 1.10;
    }
    
    return salarioFinal;
}





int main(){

    float salario,bonus;
    int tServico;

    cout << "Qual seu tempo de serviço?" << endl;
    cin >> tServico;

    cout << "Qual o seu salario atual?" << endl;
    cin >> salario;

    bonus = cauculoSalario(salario,tServico);

    cout << "Pelo seu "<<tServico<< " anos de serviço" << " você recebe " << fixed <<setprecision(2)<< bonus;


}