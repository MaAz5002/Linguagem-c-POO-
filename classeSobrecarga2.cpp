#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    string nome;
    int idade;

public:
    // Construtor sem parâmetros
    Pessoa() {//declaração do metodo
        nome = "Desconhecido";
        idade = 0;
    }

    // Construtor com um parâmetro
    Pessoa(string n) {//declaração do metodo
        nome = n;
        idade = 0;
    }

    // Construtor com dois parâmetros
    Pessoa(string n, int i) {//declaração do metodo
        nome = n;
        idade = i;
    }

    void print() const {
        cout << "Nome: " << nome << ", Idade: " << idade << endl;
    }
};
//assiantura deferentes de acordo om o parametro passado
int main() {
    Pessoa p1;                // Construtor sem parâmetros
    Pessoa p2("Alice");       // Construtor com um parâmetro
    Pessoa p3("Bob", 30);     // Construtor com dois parâmetros

    p1.print(); // Nome: Desconhecido, Idade: 0
    p2.print(); // Nome: Alice, Idade: 0
    p3.print(); // Nome: Bob, Idade: 30

    return 0;
}