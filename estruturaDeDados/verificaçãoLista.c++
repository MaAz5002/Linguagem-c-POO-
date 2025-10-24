#include <iostream>
using namespace std;

const int MAX = 50;

typedef int tipoElemento;

struct listaSequencial {
    int n; // número de elementos da lista
    tipoElemento A[MAX]; // vetor que armazena os elementos da lista
};

void inicializaLista(listaSequencial &lista) {
    lista.n = 0; // inicializa a lista vazia
}

bool listaVazia(const listaSequencial &lista) {
    return (lista.n == 0);
}

bool listaCheia(const listaSequencial &lista) {
    return (lista.n == MAX);
}

int tamanhoLista(const listaSequencial &lista) {
    return lista.n;
}

int fimLista(const listaSequencial &lista) {
    return lista.n;
}

int main() {
    listaSequencial lista;
    inicializaLista(lista);

    cout << "Lista criada!" << endl;
    cout << "Está vazia? " << (listaVazia(lista) ? "Sim" : "Não") << endl;
    cout << "Tamanho: " << tamanhoLista(lista) << endl;
    cout << "Posição Fim: " << fimLista(lista) << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Adicionando elemento " << i + 1 << ": ";
        cin >> lista.A[i];
        lista.n++;
    }

    cout << "\nElementos armazenados: ";
    for (int i = 0; i < lista.n; i++) {
        cout << lista.A[i] << "";
    }
    cout << endl;

    cout << "Está vazia? " << (listaVazia(lista) ? "Sim" : "Não") << endl;
    cout << "Tamanho: " << tamanhoLista(lista) << endl;
    cout << "Posição Fim: " << fimLista(lista) << endl;

    return 0;
}
