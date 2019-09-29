#include <iostream>
using namespace std;

int numero;

void cambiarSigno(int &n){
    n = n*-1;
}

int main() {
    cout<<"Escribe un numero"<<endl;
    cin>>numero;
    cambiarSigno(numero);
    cout<<"El numero ingresado con signo negativo es: "<<numero<<endl;
}


