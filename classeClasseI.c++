#include <iostream>
#include <cstdlib>
#include <cstring>
#include <clocale>
using namespace std;
 
struct Cliente{
    string nome;
    string email;
    string cpf;
};

int i = 0, cont = 0;

//verifica se o tamnho do cpf é valido
bool validarCpf(string cpf){

   if(cpf.size() != 11){
    return false;
   }else{
    return true;
   }
   
}


//função que sera chamada para entrada de dados
Cliente cadastrarCliente(){
    Cliente c;
    cout << "\n Sistema Cadastrar Clientes "<< endl;
    cout << "Informe o nome: " << endl;
    cin >> c.nome;
    cout << "Informe o email: " << endl;
    cin >> c.email;
    do{
        cout << "Informe o cpf(Insira 11 digitos): " << endl;
        cin >> c.cpf;

        if (!validarCpf(c.cpf)){
            cout <<"CPF inválido.Tente novamente!"<< endl;
        }
        //enquanto a negação for verdadeira
    } while (!validarCpf(c.cpf));
    
    

    

    cont++;

    return c;

}

bool buscarPorCpf(Cliente c[], int total,string numCpf){

    for (int j = 0; j < total; j++){
        if (numCpf == c[j].cpf){
           cout << "\n DADOS ENCONTRADOS \n ";

            cout << "\n     CODIGO:   " << +1 << endl;
            cout << "\nNome ...........: "<< c[j].nome << endl;
            cout << "\nEmail ...........: "<< c[j].email<< endl;
            cout << "\nCPF ...........: "<< c[j].cpf << endl;
            return true;

        } 
    }
    return false;
    

}

void exibirCliente(Cliente cadastro[]){
    cout << "\n Exibição de Cadastro Cliente   \n" << endl;

    for (int j=0;j<cont;j++){

        cout << "\n     CODIGO:   " << j+1 << endl;
        cout << "\nNome ...........: "<< cadastro[j].nome << endl;
        cout << "\nEmail ...........: "<< cadastro[j].email<< endl;
        cout << "\nCPF ...........: "<< cadastro[j].cpf << endl;
         

    }
}

int main(){

    setlocale(LC_ALL,"portuguese");
    
    string cpfBusca;
    int total = 0;
    int opc;
    Cliente cad[50];

    do{
        cout << "\n SISTEMA CADASTRO \n\n 1 - CADASTRAR CLIENTE\n 2 - EXIBIR CLIENTE\n 3 - BUSCAR POR CPF \n 4 - SAIR"<< endl;

        cout << "\n\n Digite a opção:     ";
        cin >> opc;

        switch (opc){
            case 1 :
                cad[i] = cadastrarCliente();
                i++;
                total++;
                break;
            
                case 2:
                    exibirCliente(cad);
                    break;
                case 3:
                    cout << "Digite o CPF: ";
                    //armazena o valor do cpf inserido
                    cin >> cpfBusca;
                    //a negação da função(true)
                    if (!buscarPorCpf(cad,i,cpfBusca)){
                        cout << "Esse cliente não está cadastrado."<< endl;
                    };
                    break;
 
        }
    }
    while (opc != 4);
    
    

}
