//Implementação de uma lista sequencial estática em C++

#include <iostream>
using namespace std;

const int Max = 50;

//tipo do elemento armazenado na lista
typedef int TipoElemento;

struct listaSequencial{
    int n;//numero de elementos da lista
    TipoElemento A[Max];//vetor que armazena os elementos da lista
};

int main(){
    listaSequencial lista;

    //inicialização da lista vazia
    lista.n = 0;
    cout << "Lista criada com capacidade para " << Max << " elementos." << endl;
    cout << "Numero atual de elementos na lista: " <<lista.n << endl;

    return 0;
}