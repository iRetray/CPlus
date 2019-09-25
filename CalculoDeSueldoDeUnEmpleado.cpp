#include <iostream>
using namespace std;

int main() {
    string name;
    int numHoras=0;
    double cuota=0;
    double sueldo=0;
    double sueldoSinExtra=0;
    double extra=0;
    double impuesto=0;
    cout << "Ingresa los datos para calcular el sueldo mensual de un empleado:" << endl;
    cout << "Nombre del empleado:";
    cin >> name;
    cout << "Horas trabajadas:";
    cin >> numHoras;
    cout << "Cuota por hora:";
    cin >> cuota;

    if (numHoras<=40){
        sueldo = numHoras*cuota;
        sueldoSinExtra = sueldo;
    }else{
        if(numHoras>=41 && numHoras<=49){
            sueldoSinExtra = 40*cuota;
            extra = (numHoras-40)*cuota*2;
        }else{
            if(numHoras>=51){
                sueldoSinExtra = 50*cuota;
                extra= (numHoras-50)*cuota*3;
            }
        }
    }
    sueldo = sueldoSinExtra+extra;
    impuesto = sueldo*0.88;
    cout << "-----------------------------------------------" << endl;
    cout << "El empleado " << name << " trabajo en este mes " << numHoras << " horas, se deben pagar: $" << impuesto << " al empleado." << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "El sueldo de " << name << " se compone de:" << endl;
    cout << "   Valor horas normales:  $" << sueldoSinExtra << endl;
    cout << "   Valor horas extra:  $" << extra << endl;
    cout << "   Sueldo sin descontar IVA:  $" << sueldo << endl;
    cout << "   IVA a descontar:  12%" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "   Sueldo final:  $" << impuesto << endl;
    cin >> cuota;
}