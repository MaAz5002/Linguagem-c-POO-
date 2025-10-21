#include <iostream>
using namespace std;

int cont=0;
class Cliente{
    string nome;

    public:
        void set_nome(string n){
            nome = n;
        }
        string get_nome(){
            return nome;
        }

    //exibe os clientes(metodo exibirClientes)
    void print(int indice);//declaração da função
    void cadastrarCliente();//declaração da função

};

void Cliente::print(int indice){
    cout << "\nCodigo ...........: "<< indice;
    cout << "\nNome ...........: "<< nome<< endl;
}


void Cliente::cadastrarCliente(){
    cout << "\n Sistema Cadastrar Clientes "<< endl;
    cout << "\n Informe o nome: ";
    cin >> nome;

    cont++;
    
}


int main(){
    int opc, i= 0;
    Cliente cad[50];

    do{
        cout << "\n SISTEMA CADASTRO \n\n 1 - CADASTRAR CLIENTE\n 2 - EXIBIR CLIENTE      **** 3 p/ SAIR";

        cout << "\n\n Digite a opção:     ";
        cin >> opc;

        switch (opc){
            case 1 :
                cad[i].cadastrarCliente();
                i++;
                break;
            
                case 2:
                cout << "EXIBIR CLIENTES";
                for (int j = 0; j < cont; j++){
                    cad[j].print(j+1);
                }
                
                   
                    break;
                cout << "\n SISTEMA CADASTRO \n\n 1 - CADASTRAR CLIENTE\n 2 - EXIBIR CLIENTE     **** 3 p/ SAIR";
            
    
        }
    }
    while (opc != 3);

    /*cliente1.set_nome("Maria");
    cliente1.print();*/

}