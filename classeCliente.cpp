#include <iostream>
using namespace std;

int cont=0;
class Cliente{
    private:
        string nome;
        string email;
        string cpf;

    public:
        void set_nome(string n){nome = n;}
        string get_nome(){return nome;}
        void set_email(string e){email = e;}
        string get_email(){return email;}
        void set_cpf(string cpf){this->cpf = cpf;}
        string get_cpf(){return cpf;}

        //exibe os clientes(metodo exibirClientes)
        bool validarCpf(string cpf);
        void print(int indice);//declaração da função
        Cliente cadastrarCliente();//declaração da função


};

//valida o cpf
bool Cliente::validarCpf(string cpf){
    // se for diferente de 11 retorna false
   if(cpf.size() != 11){
    return false;
    // se for igual de 11 retorna false
   }else{
    return true;
   }
}

void Cliente::print(int indice){
    cout << "\nCodigo ...........: "<< indice;
    cout << "\nNome ...........: "<< nome<< endl;
    cout << "\nEmail ...........: "<< email<< endl;
    cout << "\nCpf ...........: "<< cpf<< endl;
}


Cliente Cliente::cadastrarCliente(){
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

bool buscarPorCpf(Cliente c[], int total, string numCpf) {
    for (int j = 0; j < total; j++) {
        if (numCpf == c[j].get_cpf()) {
            cout << "\n=== DADOS ENCONTRADOS ===\n";
            c[j].print(j + 1);
            return true;
        }
    }
    cout << "\nCPF não encontrado!\n";
    return false;
}

void exibirClientes(Cliente cadastro[], int total) {
    cout << "\n=== Exibição de Clientes Cadastrados ===\n";
    for (int j = 0; j < total; j++) {
        cadastro[j].print(j + 1);
        cout << "-----------------------------\n";
    }
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

   

}