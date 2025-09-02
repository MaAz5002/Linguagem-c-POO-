#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

//novo tipo de dado
struct Funcionario{
    float salario;
    string cargo, nome;

};

//sera usado dentro de aumentoSal para caulcular aumento
//recebe um dado por vez
float calcularAumento(Funcionario fun){
    
    if (fun.cargo == "Engenheiro"){
            return fun.salario * 1.2; 
            
        }else if (fun.cargo == "Gerente"){
            return fun.salario * 1.1;
        } else{
            return fun.salario * 1.4;
        }
        
}

// total - numero total de funcionario CADASTRADOS para evitar espaços "vazios"
float aumentoSal(Funcionario fun[], int total){
    float novoSal = 0;

    for (int i = 0; i < total; i++)
    {
        //chamada da função anterior
        novoSal += calcularAumento(fun[i]);
    }
    //retorna o novo salario
    return novoSal;
    

}


//&numEng, &numGe no main são "caixas vazias"
void contFuncionario(Funcionario fun[],int cont,int &numEng,int &numGe){

    for (int i = 0; i < cont; i++)
    {
        if (fun[i].cargo == "Engenheiro"){
            numEng++; 
            
        }else if (fun[i].cargo == "Gerente"){
            numGe++;

        };
    }
    
    
}

int dadosFuncionarios(Funcionario fun[]){
    string repeticao;
    //contagem dos indices
    int cont = 0;
    
    do{
  
        cout << "Qual o nome do funcionário? "; cin >> fun[cont].nome;
        
        cout << "Digite o valor do seu salario atual: "; cin >> fun[cont].salario;
        
        cout << "Seu cargo atual: "; cin >> fun[cont].cargo;
        
        cout << "\nDeseja realizar a matricula de outro funcionário?? \n"; cin >> repeticao;

        cont++;

    } while (repeticao == "Sim" && cont < 10 );

    // i < cont previne o erro de retornar espaços "vazios"
    for (int i = 0; i < cont; i++){
        cout << "\nNome: " << fun[i].nome << "\n";
        cout << "Cargo: " << fun[i].cargo<< "\n";
        cout << "Salário: " <<fixed << setprecision(2) << fun[i].salario<< "\n";

    };
    return cont;

}
int main(){
    Funcionario fun[10];
    int cont = 0;

    int numEng = 0,numGe = 0 ;
    float salarioF = 0, salarioA = 0;

    cont = dadosFuncionarios(fun);

    contFuncionario(fun,cont,numEng,numGe);
    //numEng - ja preenchido
    cout <<"\nNúmero de engenheiros: " << numEng << endl;
    //numGe - ja preenchido
    cout <<"\nNúmero de gerentes: " << numGe << endl;


    for (int i = 0; i < cont; i++){
        salarioA += fun[i].salario;
    }
    cout << fixed << setprecision(2);
    cout << "\nCusto total antes do aumento: R$ " << salarioA << endl;

    salarioF = aumentoSal(fun, cont);
    cout << "Custo total após o aumento: R$ " << salarioF << endl;


}


