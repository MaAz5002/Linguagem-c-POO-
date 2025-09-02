#include <iostream>
#include <cstdlib>
#include <cstring>
#include <clocale>
using namespace std;

struct Cliente{
    string nome;
};

int i = 0, cont = 0;

//função que sera chamada para entrada de dados
Cliente cadastrarCliente(){
    Cliente c;
    cout << "\n Sistema Cadastrar Clientes "<< endl;
    cout << "Informe o nome: " << endl;
    cin >> c.nome;

    cout << " " << c.nome <<endl;
    cont++;

    return c;

}

void exibirCliente(Cliente cadastro[]){
    cout << "\n Exibição de Cadastro Cliente   \n" << endl;

    for (int j=0;j<cont;j++){

        cout << "\n     CODIGO:   " << j+1 << endl;
        cout << "\nNome ...........: "<< cadastro[j].nome;
         

    }
}

int main(){

    setlocale(LC_ALL,"portuguese");

    int opc;
    Cliente cad[50];

    do{
        cout << "\n SISTEMA CADASTRO \n\n 1 - CADASTRAR CLIENTE\n 2 - EXIBIR CLIENTE      **** 3 p/ SAIR";

        cout << "\n\n Digite a opção:     ";
        cin >> opc;

        switch (opc){
            case 1 :
                cad[i] = cadastrarCliente();
                i++;
                break;
            
                case 2:
                    exibirCliente(cad);
                    break;
                cout << "\n SISTEMA CADASTRO \n\n 1 - CADASTRAR CLIENTE\n 2 - EXIBIR CLIENTE     **** 3 p/ SAIR";
            
    
        }
    }
    while (opc != 3);
    
    

}
