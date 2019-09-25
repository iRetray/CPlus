#include <iostream>
using namespace std;

int numero2 = 4;

int mostrarSuma(){
    int numero1 = 6;
    return numero1+numero2;
}

int main() {
    cout << "El resultado de la suma de la variable local 6 y la variable global 4 es: " << mostrarSuma() << endl;
}

