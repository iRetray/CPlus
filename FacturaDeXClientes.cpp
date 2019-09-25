#include <iostream>
#include <list>
using namespace std;

int main() {
    list <string> nombres;
    list <int> productos;
    list <int> costos;
    bool seguir=true;
    while(seguir){
        string name="";
        int precioU;
        cout << "Nombre del cliente: ";
        cin >> name;
        nombres.push_back(name);
        bool ingresar=true;
        int total=0;
        int cantArticulos=0;
        while (ingresar){
            cout << "Ingrese el precio del producto: (Escriba 0 para dejar de ingresar productos)" << endl;
            cin >> precioU;
            if(precioU==0){
                ingresar = false;
            }{
                cantArticulos++;
            }
            total = precioU+total;
        }
        productos.push_back(cantArticulos);
        costos.push_back(total);
        int otro;
        cout << "---------------------" << endl;
        cout << "Pedido del cliente " << name << endl;
        cout << "Total a pagar:      $ " << total << endl;
        cout << "¿Quiere ingresar otro cliente? (0-1)" << endl;
        cin >> otro;
        if(otro==0){
            seguir = false;
        }
    }
}

