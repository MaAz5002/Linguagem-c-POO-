#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Pessoa{
    protected:
        string nome;
        string matricula;
        
    public:
    // construindo um objeto Pessoa Padrão
        Pessoa(string n, string m):nome(n), matricula(m){}
        virtual ~Pessoa(){}

        // Polimorfismo : obriga as classes derivadas a implementar este metodo
        // em aluno ela implementa o escopo de exibirDados
        virtual void exibirDados() const = 0;
        string getNome() const{return nome;}
        string getMatricula() const{return matricula;}

};

class Aluno : public Pessoa{
    private:
    //aluno vai ter um vetor com 3 notas
        float nota[3];
    // aluno vai ter uma media final
        float mediaFinal;

    public:
        float get_mediaFinal() const {return mediaFinal;}
        
        Aluno(string mat, string n, float n1, float n2, float n3)
        :Pessoa(mat, n), mediaFinal(0.0f){
            nota[0] = n1;
            nota[1] = n2;
            nota[2] = n3;
        }   

        void statusFinal() const{
                if(mediaFinal > 7.0f){
                    cout << "Matrícula: " << matricula
                    << " | Nome: " << nome
                    << " | Média: " << mediaFinal << endl; }

        }

      //calcula a media do aluno
        float calcularMedia(){
            float soma = 0, mediaCalculada;
            
            for(int n = 0; n < 3; n++){
                soma += nota[n];}
        
                mediaCalculada =  soma / 3.0f;
            
            mediaFinal = mediaCalculada;
            return mediaFinal;
        }

        void exibirDados() const override {
        cout << fixed << setprecision(2);
        cout << "Matrícula: " << matricula
             << " | Nome: " << nome
             << " | Média: " << mediaFinal << endl;

        }

};

int main(){
    int numAlunos;
    float somaMediasTurma = 0.0f, n1, n2, n3, mediaDoAluno;
    string mat,nome;
    
    
    cout << "Digite o número de alunos: ";
    cin >> numAlunos;

    //vetor dinamico, criando objetos do tipo Aluno
    Aluno** turma = new Aluno*[numAlunos];

    for (int i = 0; i < numAlunos; i++) {

        cout << "\n--- Cadastro Aluno " << (i + 1) << " ---\n";
        cout << "Matrícula: "; cin >> mat;
        cout << "Nome: ";
        cin.ignore(); 
        getline(cin, nome);

        cout << "Digite as 3 notas:\n";
        cout << "Nota 1: "; cin >> n1;
        cout << "Nota 2: "; cin >> n2;
        cout << "Nota 3: "; cin >> n3;

        turma[i] = new Aluno(mat, nome, n1, n2, n3);
        
        
        mediaDoAluno = turma[i]->calcularMedia();
        somaMediasTurma += mediaDoAluno;
    }
        somaMediasTurma /= numAlunos;   

    
    cout << fixed << setprecision(2);
    cout << "Média da turma: " << somaMediasTurma << ".\n";
    

    cout << "-- Alunos acima da média --"<< endl;
    for(int i = 0; i < numAlunos; i++){
        turma[i]->statusFinal();
    }
}

