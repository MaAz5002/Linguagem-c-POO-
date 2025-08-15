#include <iostream>
using namespace std;

int main(){
  
float valor_minimo;
float valor_sal;
float valorComAl;
  
  cout << "Digite o valor do salario mínimo:";
  cin >> valor_minimo;
  
  cout << "Digite o valor do seu salario:";
  cin >> valor_sal;
  
  cout << "Voce recebe o salario " << (valor_sal/valor_minimo) << " vezes\n";
  
  valorComAl = valor_sal * 0.08;
  cout << "O valor do desconto é igual a: " << valorComAl;
  
}