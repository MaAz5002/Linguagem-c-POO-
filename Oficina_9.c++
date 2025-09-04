#include <iostream>
#include <string>
using namespace std;

int main(){

    string entradaS;
    string repeticao;
   

    do
    {
        cout << "Digite a senha: " << endl;
        getline(cin,entradaS); // lê a senha com espaço ou qualquer outro conjunto de caractere

        if (entradaS == "Patinho Feio" || entradaS == "patinho feio")
        {
            cout << "Senha correta. Entrada liberada!" << endl;
            break;
        }else{
            cout << "Senha errada. Alerta intruso!" << endl;
            cout << "Deseja tentar novamente?"<< endl;
            getline(cin,repeticao);
            // lê a senha com espaço ou qualquer outro conjunto de caractere
        }
        
    } while (repeticao == "sim" || repeticao == "Sim");
    
    return 0;

}