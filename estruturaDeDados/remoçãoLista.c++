#include <iostream>
using namespace std;

const int MAX = 50;
typedef int tipoElemento;

struct listaSequencial{
    int n;
    tipoElemento A[MAX];
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
bool inserirElemento(listaSequencial &lista, tipoElemento num, int i){
    // se listaCheia retornar true, a lista está cheia
    if (listaCheia(lista)){
        //retorna falso se a lista estiver cheia para impedir a inserção 
        //de novos elementos
        return false;
    }
//verifica se o indice é menor que 0 ou maior que o número de elementos da lista
    if (i < 0 || i > lista.n){
        return false;
    }

    /*  1 Inicialização -  q = lista.n -1
        2 Condição - q >= i
        3 Decremento - q--  */
   
    // desloca elementos para a direita
    // incia em lista.n -1 (último elemento)
    // quando a lista estiver vazia, sairá do laço imediatamente
    for (int q = lista.n - 1; q >= i; q--){
        lista.A[q+1] = lista.A[q];
    }
    
    lista.A[i] = num; // insere o novo elemento na posição i(posição desejada)
    lista.n++; // incrementa o número de elementos da lista
    return true; // retorna verdadeiro indicando que a inserção foi bem sucedida
    
    
}

bool inserirOrdenado(listaSequencial &lista, tipoElemento num){
    // se listaCheia retornar true, a lista está cheia
    //impede a inserção de novos elementos
    if (listaCheia(lista)){
        return false;
    }

    int i = 0; //contabilizador para encontrar a posição correta
    //enquanto i for menor que o número de elementos da lista
    //e o elemento na posição i for menor que o número a ser inserido   

    while (i < lista.n && lista.A[i] < num){
        //incrementa i para encontrar a posição correta
        i++;
    }

    return inserirElemento(lista,num,i);
}

bool removerElemento(listaSequencial &lista, int pos){
    //verifica se a lista está vazia
    if (listaVazia(lista)){
        return false;
    }
    //verifica se o índice é inválido
    if (pos < 0 || pos >= lista.n){
        return false;
    }
 /*  1 Inicialização -  int i = pos
        2 Condição - i < lista.n
        3 Incremento - i++  */

    // desloca elementos para a esquerda
    for (int i = pos; i < lista.n - 1; i++) {
        lista.A[i] = lista.A[i + 1];
    }
    lista.n--; // decrementa o número de elementos da lista
    return true; // retorna verdadeiro indicando que a remoção foi bem sucedida
}

tipoElemento lerElemento(const listaSequencial &lista , int pos){
    if (pos < 0 || pos >= lista.n){
        cout << "Posição inválida!" << endl;
        return 0;
    }else{
        return lista.A[pos];
    }
    
}

void imprimirLista(const listaSequencial &lista){

    if(listaVazia(lista)){
        cout << "Lista vazia!" << endl;
    }else{
        
        for (int i = 0; i < lista.n; i++) {
            cout << "Posição " << i << ": " << lista.A[i] << endl;
        }
    }
}



int main() {
    listaSequencial lista = {3, {10, 20, 30}}; // lista com 3 elementos

    imprimirLista(lista);

    cout << "Elemento da posição 1: " << lerElemento(lista, 1) << endl;
    cout << "Elemento da posição 5: " << lerElemento(lista, 5) << endl; // posição inválida

    return 0;
}


