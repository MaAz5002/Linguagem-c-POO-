#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float mediaFinal(float n1,float n2,float n3){
    float mediaAluno;
    
    mediaAluno = ((n1*2) + (n2*3) + (n3*5)) / 10;
    
    return mediaAluno;

}

int main(){

    float n1,n2,n3,resultadoF;

    cout << "1 - Nota: ";
    cin >> n1;
    cout << "2 - Nota: ";
    cin >> n2;
    cout << "3 - Nota: ";
    cin >> n3;
    

    resultadoF = mediaFinal(n1,n2,n3);

    if (resultadoF >= 7){
        cout << "\nMEDIA FINAL: " << fixed<<setprecision(1)<< resultadoF << endl;
        cout << " APROVADO" << endl;
    }else if (resultadoF < 7 && resultadoF >= 4){
       cout << "\nMEDIA FINAL: " << fixed<<setprecision(1)<< resultadoF << endl;
        cout << "\nEXAME FINAL" << endl;
    }else if (resultadoF < 4){
       cout << "\nMEDIA FINAL: " <<fixed<<setprecision(1)<< resultadoF << endl;
        cout << "\nREPROVADO" << endl;
    }
    
    

}
