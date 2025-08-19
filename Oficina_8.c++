#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float nota1,nota2,nota3, resultado;

    cout << "Escreva sua nota primeira nota: "; cin >> nota1;
    cout << "Escreva sua nota segunda nota: "; cin >> nota2;
    cout << "Escreva sua nota terceira nota: "; cin >> nota3;

    resultado = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10; 
    
    if (resultado >= 7){
        cout << " O aluno foi aprovado." << " \n";
        cout << " A média final do aluno é " << fixed << setprecision(1) << resultado;

    }else if(resultado < 7){
        cout << " O aluno não foi aprovado." << " \n";
        cout << " A média final do aluno é " << fixed << setprecision(1) << resultado;
    }
    
    return 0;

    



}