#include <iostream>
#include <string>
using namespace std;


class Pessoa{
    protected:
        string nome;
    public:
        void set_nome(string nome){
            this->nome = nome;
        };
        string get_nome(){
            return nome;
        }
        //virtual - sobreescreve a função
        virtual void print(){
            cout<< "classe base:" <<endl;
            cout << "Nome: "<<nome<<endl;
        }
        virtual ~Pessoa(){}
};

class Funcionario: public Pessoa{
  private:
      string cargo;
      float salario;
      
  public:
    Funcionario() {
        nome = "Indefinido";
        salario = 0.0;
        cargo = "Sem cargo";
        cout << "Funcionário criado com dados padrão.\n";
    }

    Funcionario( float salario, string cargo, string nome) {
        this->nome = nome;
        this->salario = salario;
        this->cargo = cargo;
        //cout << "Funcionário criado: " << this->nome << endl;
    }

    ~Funcionario() {
        cout << "Funcionário destruído: " << nome << endl;
 }

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


    
    void print() override{
        Pessoa::print();
        cout<< "classe Derivado:" <<endl;
        cout << "O nome do funcionario informado foi : "<< nome << endl;
        cout << "O salário do funcionario informado foi : "<< salario << endl;
        cout << "\n";
        //cout << "salario: "<<salario<<endl;
    } ;
    float calcula_salarionovo(float percentual);

  } ;
 
float Funcionario::calcula_salarionovo(float percentual){
  return salario * (1 + percentual);

}

//void Funcionario::print(){
 // cout << "O nome do funcionario informado foi : "<< nome << endl;
  //cout << "O salário do funcionario informado foi : "<< salario << endl;
 // cout << "\n";
  //};



int main(){

  Funcionario func[2];
  string nome,cargo;
  int numGe = 0, numEng=0;
  float salario,salarioTotal = 0,salarioAtual= 0,porcentagem;
  
  for (int i = 0; i < 2; i++){
    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    cout << "\n";

   
    cout << "Qual o salário do funcionario: ";
    cin >> salario;
    cout << "\n";

    cout << "Qual o cargo do funcionario: ";
    cin >> cargo;
    cout << "\n";

    func[i] = Funcionario(salario,cargo,nome);

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
    
    if(func[i].get_cargo() == "Engenheiro"){
        porcentagem = 0.2;
    }else if (func[i].get_cargo() == "Gerente"){
        porcentagem = 0.1;
    }else{
        porcentagem = 0.4;
    }
    
    salarioAtual = func[i].calcula_salarionovo(porcentagem); 
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