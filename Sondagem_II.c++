#include <iostream>
//bibliotecas para converter string maiuscula e minuscula
// #include <algorithm>
// #include <cctype>
using namespace std;

struct Funcionario{
    float salario;
    string cargo, nome;

};


int main(){
    Funcionario fun[10];
    string repeticao;
    //contagem dos indices
    int cont = 0;
    //contador de funcionario
    int numEng = 0,numGe = 0 ;
    // armazenamento de valor de salario
    float salarioIn = 0, salarioF = 0;

    do{
  
        cout << "Qual o nome do funcionário? "; cin >> fun[cont].nome;
        
        cout << "Digite o valor do seu salario atual: "; cin >> fun[cont].salario;
        
        cout << "Seu cargo atual: "; cin >> fun[cont].cargo;
        
        cout << "\nDeseja realizar a matricula de outro funcionário?? \n"; cin >> repeticao;

        cont++;

    } while (repeticao == "Sim" && cont < 10 );

    // i < cont previne o erro de retornar espaços "vazios"
    for (int i = 0; i < cont; i++){
        cout << "Nome: " << fun[i].nome << "\n";
        cout << "Cargo: " << fun[i].cargo<< "\n";
        cout << "Salário: " << fun[i].salario<< "\n";

    }


    for (int i = 0; i < cont; i++)
    {
        if (fun[i].cargo == "Engenheiro"){
            numEng++;
            salarioF += fun[i].salario * 1.2; 
            
        }else if (fun[i].cargo == "Gerente"){
            numGe++;
            salarioF += fun[i].salario * 1.1;
        }
        
        salarioIn += fun[i].salario;
    }
    
    cout << "\nO custo total anterior ao aumento"<< salarioIn <<endl;
    cout << "Custo total após o aumento: R$ " << salarioF << endl;
    


    


}