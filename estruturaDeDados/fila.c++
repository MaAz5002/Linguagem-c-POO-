#include <iostream>
using namespace std;

struct No{
    int dado;
    No* proximo;//aponta para o proximo no
};

No* inicializarLista(){
    return nullptr; //lista vazia
}
bool estaVazia(No* lista){
    return lista == nullptr;
}

No* lista = inicializarLista();

void inserirInicio(No* &lista, int valor){
    No* novoNo = new No(); //aloca/cria um novo nó na memoria
    novoNo->dado = valor; //atribui valor ao campo dado do novo nó
    novoNo->proximo = lista; //novo nó aponta para o antigo primeiro nó
    lista = novoNo; //lista agora atualiza o inico da lista para o novo nó
}

void inserirFim(No* &lista,int valor){
    No* novoNo = new No();
    novoNo->dado = valor;
    novoNo->proximo = nullptr;
    if (estaVazia(lista)){
        novoNo = lista;
    }else{
        No* atual = lista;//começa do inicio da lista,
        //pois "lista" aponta para o primeiro nó(cabeça)
        while(atual->proximo != nullptr){
            atual = atual->proximo;
        }
        atual->proximo = novoNo;

    }
    
}

void remover(No* &lista, int valor){
    No* anterior = nullptr;
    //começa apontando para o primeiro no da lista
    No* atual = lista;

    //Percorro os nós um por um, enquanto:
    //ainda não cheguei no fim da lista (atual ≠ nulo), e
    //ainda não encontrei o valor que quero remover.
    while(atual != nullptr && atual->dado != valor){
        anterior = atual;
        atual = atual->proximo;
    }
    

    if(atual != nullptr){
        if(anterior == nullptr){
            lista = atual->proximo;
        }else{
            anterior->proximo = atual->proximo;
        }
    }
    delete atual; //libera a memoria do no removido
}

bool buscar(No* lista, int valor){
    
}


