#include <iostream>
#include <string>
using namespace std;

// Classe base abstrata Pessoa
class Pessoa {
protected:
    string nome;

public:
    // Métodos de acesso para o nome
    void set_nome(string nome) {
        this->nome = nome; }
    string get_nome() const {
        return nome; }

    // Método abstrato para impressão (virtual puro)
    virtual void print() const = 0;

    // Destrutor virtual
    virtual ~Pessoa() {}
};

// Classe derivada Func
class Func : public Pessoa {
private:
    float salario;

public:
    // Construtor padrão
    Func() : salario(0.0) {}

    // Construtor parametrizado
    Func(string nome, float salario) {
        this->nome = nome;
        this->salario = salario;
    }

    // Métodos de acesso para salário
    void set_salario(float valor) { salario = valor; }
    float get_salario() const { return salario; }

    // Cálculo do novo salário
    float calcula_salarionovo(float percentual) const {
        return salario + (salario * percentual);
    }

    // Sobrescrita do método print
    void print() const override {
        cout << "Nome: " << nome << endl;
        cout << "Salário: " << salario << " reais\n";
    }
};

int main() {
    Func funcionarios[3];  // Array para armazenar até 3 funcionários
    int i = 0;             // Índice para controle do número de funcionários
    float custoTotalAntes = 0.0; // Cálculo do custo total

    // Cadastro de funcionários
    while (i < 3) {
        string nome;
        float salario;

        // Solicitar dados do funcionário
        cout << "Digite o nome do funcionário: ";
        cin >> nome;
        funcionarios[i].set_nome(nome);

        cout << "Digite o salário do funcionário: ";
        cin >> salario;
        funcionarios[i].set_salario(salario);

        // Exibir nome e novo salário do funcionário
        cout << "O nome do Funcionário informado foi: " << funcionarios[i].get_nome() << endl;
        cout << "O Novo Salário do Funcionário é: " << funcionarios[i].calcula_salarionovo(0.2) << endl;

        i++;
    }

    // Exibir os dados dos funcionários
    cout << "\nDados dos funcionários cadastrados:\n";
    for (int j = 0; j < i; j++) {
        cout << "\nFuncionário " << (j + 1) << ":\n";
        funcionarios[j].print();
    }

    // Calcular o custo total antes do aumento
    for (int j = 0; j < i; j++) {
        custoTotalAntes += funcionarios[j].get_salario();
    }

    // Exibir o custo total
    cout << "\nCusto total antes do aumento: " << custoTotalAntes << " reais\n";

    return 0;
}