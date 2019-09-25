#include <iostream>
using namespace std;

int main() {
    int num=0;
    cout << "¿Cuantos empleados deben ser calculados?" << endl;
    cin >> num;
    int vendedorAlto=0;
    while (num!=0){
        string name="";
        int numV=0;
        int valorVenta=0;
        cout << "Nombre del empleado:";
        cin >> name;
        cout << "¿Cuantas ventas realizo el empleado?";
        cin >> numV;
        cout << "¿Cuanto valen las ventas hechas por "<< name<< "?";
        cin >>valorVenta;
        double total=0.0;
        total = (numV*valorVenta*0.09)+5000;
        cout << "Al empleado " << name << " se le deben pagar  $" << total << " por el valor de la semana mas sus comisiones" << endl;
        if(total>=8000){
            vendedorAlto++;
        }
        num--;
    }
    cout << vendedorAlto <<"  vendedores ganaron mas de $8000 en esta semana"<< endl;
    cin >> vendedorAlto;
    return 0;
}