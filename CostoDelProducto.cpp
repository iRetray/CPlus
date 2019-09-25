#include <iostream>
using namespace std;

int main() {
    int costoUni;
    int impuesto;
    int costoFinal;
    cout << "¿Cual es el costo del articulo que desea comprar?" << endl;
    cin >> costoUni;
    if (costoUni<=30){
        impuesto = 0;
        costoFinal = costoUni;
    } else{
        if (costoUni>=31 && costoUni<=399){
            impuesto = 30;
            costoFinal = costoUni+costoUni*0.3;
        }else{
            if (costoUni>=400){
                impuesto = 50;
                costoFinal = costoUni+costoUni*0.5;
            }
        }
    }
    cout << "El impuesto cobrado es de " << impuesto << "%" << endl;
    cout << "El producto cuesta $" << costoFinal << "("<< costoUni <<" sin impuesto)" << endl;
    cin >>costoUni;
}

