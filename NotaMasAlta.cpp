#include <iostream>
using namespace std;

int main() {
    int nota;
    int notaAlta=0;
    int contador=1;
    while (contador<=3){
        cout << "Escribe la nota # " << contador << endl;
        cin >> nota;
        if(nota>notaAlta){
            notaAlta=nota;
        }
        contador++;
    }
    cout << "La nota mas alta es " << notaAlta << endl;
    cin >> nota ;
}

