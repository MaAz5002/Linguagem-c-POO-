#include <iostream>
#include <string>
using namespace std;

class Funcionario{
  private:
      string nome,cargo;
      float salario;
      
  public:
  //usado para indicar o valor "nome" do obejto
      void set_name(string s) {
        nome = s; 
    };
    //usado para indicar o valor "nome" do obejto
      void set_salario(float sal){
        salario = sal;
    };
      float get_salario(){
        return salario;

    };

    void set_cargo(string c){
      cargo = c;
    };
    
    string get_cargo(){
      return cargo;
    }


    
    void print() ;
    float calcula_salarionovo(float percentual);

  } ;
 
float Funcionario::calcula_salarionovo(float percentual){
  return salario * (1 + percentual);

}

void Funcionario::print(){
  cout << "O nome do funcionario informado foi : "<< nome << endl;
  cout << "O salário do funcionario informado foi : "<< salario << endl;
  cout << "\n";
  };



int main(){

  Funcionario func[2];
  string nome,cargo;
  int numGe = 0, numEng=0;
  float salario,salarioTotal = 0,salarioAtual= 0;
  
  for (int i = 0; i < 2; i++){
    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    func[i].set_name(nome);
   
    cout << "Qual o salário do funcionario: ";
    cin >> salario;
    func[i].set_salario(salario);
    cout << "\n";

    cout << "Qual o cargo do funcionario: ";
    cin >> cargo;
    func[i].set_cargo(cargo);
    cout << "\n";

  }
  
  for (int j = 0; j < 2; j++){
    func[j].print();
  }
  
  salarioTotal = 0;
  for (int i = 0; i < 2; i++){
    salarioTotal += func[i].get_salario();
  
  }


  cout << "Custo Total Salários Atual: R$ "<< salarioTotal<<" reais" <<endl; 
  cout << "\n";

  for (int i = 0; i < 2; i++){
    cout << "Salário antes do aumento (Funcionario " << i + 1 << "): " 
         << func[i].get_salario() << endl;

    salarioAtual = func[i].calcula_salarionovo(0.2); 
    cout << "Salário com aumento: " << salarioAtual << endl;
    func[i].set_salario(salarioAtual);

  }

  for (int i = 0; i < 2; i++){
    salarioTotal += func[i].get_salario();
  
  }

  cout << "Custo Total Salários apos o reajuste: R$ "<< salarioTotal<<" reais" <<endl; 
  cout << "\n";
  
  
  for (int i = 0; i < 2; i++){

    if (func[i].get_cargo() == "Engenheiro" || func[i].get_cargo() == "engenheiro"){
        numEng++;
    }else if (func[i].get_cargo() == "Gerente" ||func[i].get_cargo() == "gerente"){
            numGe++;

        };
  }
    cout << "O número de Engenheiro: " << numEng << endl;
    cout << "O número de Gerente: " << numGe<< endl;

  
  
  
  
    


  }