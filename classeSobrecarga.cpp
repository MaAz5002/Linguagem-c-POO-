#include <iostream>
using namespace std;

//sobrecarga possui tipos diferente de assinatura(parametro,tipo de dado,entrada) diferente do polimorfismo que possui a mesma assinatura
//assinatura diferentes de acordo om o parametro passado
void func (int i){
  cout <<"funcao parametro int: " << i << endl;
}

void func (char c){
  cout <<"funcao parametro char: " << c << endl;
}

void func (char *s){
  cout <<"funcao parametro string: " << s << endl;
}

int main()
{
    func(10);
    func('B');
    func("Hello");
    return 0;
}
