#include <iostream>
#include <string>
using namespace std;

class Funcionario{
  private:
      string nome;
      float salario;
      
  public:
      void set_name(string s) {nome = s; };
      void set_salario(float sal){salario = sal;};
      float get_salario(){return salario;};
      void print() ;
  } ;
 
void Funcionario::print(){
  cout << "O nome do funcionario informado foi : "<< nome << endl;
  cout << "O salário do funcionario informado foi : "<< salario << endl;


  };

int main(){

  Funcionario func[2];
  string nome;
  float salario,salarioTotal;
  
  for (int i = 0; i < 2; i++){
    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    func[i].set_name(nome);
   
    cout << "Qual o salário do funcionario: ";
    cin >> salario;
    func[i].set_salario(salario);
    cout << "\n";

  }
  
  for (int j = 0; j < 2; j++)
  {
    func[j].print();
  }
  
 for (int i = 0; i < 2; i++)
  {
    salarioTotal += func[i].get_salario();
    cout << "O valor total dos salario dos funcionario: "<< salarioTotal<< endl; 
  }
  
    


  }