#include <iostream>
#include <list>
#include <mem.h>

using namespace std;

int main() {
    char numero[]="";
    cout << "Ingresa el numero" << endl;
    cin >> numero;
    strrev(numero);
    cout << "El numero al revez es " << numero << endl;
}


