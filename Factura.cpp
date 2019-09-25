#include <iostream>
using namespace std;

int main() {
    string nameC;
    int tipo,numE=0,numR=0,numA=0;
    cout << "Ingrese el nombre del cliente:" << endl;
    cin >> nameC;
    cout << "¿Que categoria es el cliente?" << endl;
    cin >> tipo;
    cout << "Numero de escobas compradas:" << endl;
    cin >> numE;
    cout << "Numero de recogedores comprados:" << endl;
    cin >> numR;
    cout << "Numero de aromatizantes comprados:" << endl;
    cin >> numA;
    cout << "-------------------------------" << endl;
    cout << "Los precios son:" << endl;
    cout << "   Escobas:    $2000" << endl;
    cout << "   Recogedores:    $3500" << endl;
    cout << "   Aromatizantes:    $6500" << endl;
    cout << "-------------------------------" << endl;
    cout << "       Factura" << endl;
    int eTotal,rTotal,aTotal;
    eTotal = 2000*numE;
    rTotal = 2500*numR;
    aTotal = 6500*numA;
    cout << "Cliente:   " << nameC << endl;
    cout << numE << " escobas:  $" << eTotal << endl;
    cout << numE << " recojedores:  $" << rTotal << endl;
    cout << numE << " aromatizantes:  $" << aTotal << endl;
    int sub;
    sub = eTotal+rTotal+aTotal;
    double total;
    cout << "Subtotal:  $" << sub << endl;
    switch (tipo){
        case 1:
            cout << "El ciente tiene 5% de descuento por ser tipo 1" << endl;
            total = sub*0.95;
            break;
        case 2:
            cout << "El ciente tiene 8% de descuento por ser tipo 1" << endl;
            total = sub*0.92;
            break;
        case 3:
            cout << "El ciente tiene 12% de descuento por ser tipo 1" << endl;
            total = sub*0.88;
            break;
        case 4:
            cout << "El ciente tiene 15% de descuento por ser tipo 1" << endl;
            total = sub*0.85;
            break;
    }
    cout << "El total a pagar es:   $" << total << endl;
    cin >> nameC;
    return 0;
}