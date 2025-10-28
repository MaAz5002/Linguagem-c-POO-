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
    //percorre a lista
    while (i < lista.n && lista.A[i] < num){
        //incrementa i para encontrar a posição correta
        i++;
    }

    return inserirElemento(lista,num,i);
}

int buscaBinaria(listaSequencial &lista, tipoElemento num){

    int inicio = 0;//
    int fim = lista.n -1; // fim  da lista
    
    
    if (listaVazia(lista)){
        return -1;
    }
    //enquanto for menor ou igual
    //ex - lista[4] 
    // quando chegar na ultima posição o loop encerra
    //percorre a lista
    while(inicio <= fim){
        int meio = (inicio + fim)/2;// caucula o indice do meio
        // se o elemento for encontrado na posição, retorna o valor 
        if (lista.A[meio] == num){
            return meio;
        }else if (lista.A[meio] < num){
            inicio = meio +1;
        }else{
            fim = meio - 1;
        } 

    }
    return -1;
    

}

int main() {
    listaSequencial lista;
    inicializaLista(lista);

    inserirOrdenado(lista, 5);
    inserirOrdenado(lista, 10);
    inserirOrdenado(lista, 15);
    inserirOrdenado(lista, 20);

    int num = 15;
    int pos = buscaBinaria(lista, num);

    cout << "Lista ordenada: ";
    for (int i = 0; i < lista.n; i++) {
        cout << lista.A[i] << " ";
    }
    cout << endl;

    if(pos != -1){
        cout << "Elemento " << num << " encontrado na posição " << pos << endl;

    }else{
        cout << "Elemento " << num << " não encontrado encontrado" <<endl;
    }

    return 0;
}