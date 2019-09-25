#include <iostream>
using namespace std;

int main() {
    int cantCerda,cantRodillo,cantSellador;
    cout << "¿Cuantas brochas de cerda desea llevar?" << endl;
    cin >> cantCerda;
    cout << "¿Cuantos rodillos desea llevar?" << endl;
    cin >> cantRodillo;
    cout << "¿Cuantos selladores desea llevar?" << endl;
    cin >> cantSellador;
    int precioCerda=5000;
    int precioRodillo=3000;
    int precioSellador=12000;
    cout << "Los precios de los productos son:" << endl;
    cout << "Brochas de cerda   $" << precioCerda << endl;
    cout << "Rodillos   $" << precioRodillo << endl;
    cout << "Selladores   $" << precioSellador << endl;
    cout << "Las brochas tienen un 20% de descuento, y los rodillos un 15%" << endl;
    double precio;
    precio = (cantCerda*precioCerda)*0.8 + (cantRodillo*precioRodillo)*0.85 + (cantSellador*precioSellador);
    cout << "Segun las cantidades pedidas y los descuentos aplicados, su orden cuesta    $" << precio << endl;
    cout << "¿Desea pagar de contado o con tarjeta? (De contado obtendra un 7% de descuento)" << endl;
    cout << "1      Contado" << endl;
    cout << "2      Tarjeta" << endl;
    int pago;
    cin >> pago;
    if (pago==1){
        precio = precio*0.93;
    }
    cout << "El valor a pagar es:   $" << precio << endl;
    cin >> cantCerda;
}

