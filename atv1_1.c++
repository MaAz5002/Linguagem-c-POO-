#include <iostream>
using namespace std;

int main(){
  
    float salario, novoSalario;
    string cargo,repeticao;

    string cargo_eng = "Engenheiro";
    string cargo_gerente = "Gerente";
    

    do{
        cout << "Digite o valor do seu salario atual: "; cin >> salario;
        cout << "Seu cargo atual:"; cin >> cargo;

        
        if(cargo != cargo_eng && cargo != cargo_gerente){
        
            novoSalario = salario * 1.4 ;
            cout << "O seu novo salario é igual a :" << novoSalario;
        
        }else if(cargo == cargo_eng){

            novoSalario = salario * 1.2 ;
            cout << "O seu novo salario é igual a :" << novoSalario;
        }else if(cargo == cargo_gerente){

            novoSalario = salario * 1.1 ;
            cout << "O seu novo salario é igual a :" << novoSalario;
        }
        
        cout << "\nDeseja continuar calculo para outro funcionário?? "; cin >> repeticao;

    } while (repeticao == "Sim");
    
    return 0;
    
  
}