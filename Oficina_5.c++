#include <iostream>
using namespace std;

int main(){
    int a,b,x;

    cout << "Insira um valor inteiro: ";
    cin >> a;

    cout << "Insira o segundo valor inteiro: ";
    cin >> b;

    x = a;
    a = b;
    b = x;
    

    cout << "O valor inicial de A é "<<" "<< x << " \n";
    cout << "E o valor de B é "<< " "<< a << "\n";
    cout << "O valor final de A é "<< " "<< x <<"\n"; 
    cout << "O valor final de B é "<< " "<< b <<"\n"; 



}