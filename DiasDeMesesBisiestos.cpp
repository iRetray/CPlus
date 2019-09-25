#include <iostream>
using namespace std;

int main() {
    int numMes,numAno;
    bool esAnoBisiesto = false;
    cout << "Ingrese el numero del mes" << endl;
    cin >> numMes;
    cout << "Ingrese el numero de año" << endl;
    cin >> numAno;
    if (numAno==2016 || numAno==2020 || numAno==2024 || numAno==2028 || numAno==2032 || numAno==2036 || numAno==2040 || numAno==2044 || numAno==2048 || numAno==2052 || numAno==2056 || numAno==2060){
        esAnoBisiesto = true;
        cout << "El año es bisiesto" << endl;
    }else{
        cout << "El año no es bisiesto" << endl;
    }
    switch (numMes){
        case 1:
            cout << "Enero" << endl;
            cout << "31 dias" << endl;
            break;
        case 2:
            if (esAnoBisiesto){
                cout << "Febrero" << endl;
                cout << "29 dias  (el año es bisiesto)" << endl;
            }else{
                cout << "Febrero" << endl;
                cout << "28 dias (el año no es bisiesto)" << endl;
            }
            break;
        case 3:
            cout << "Marzo" << endl;
            cout << "31 dias" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            cout << "30 dias" << endl;
            break;
        case 5:
            cout << "Mayo" << endl;
            cout << "31 dias" << endl;
            break;
        case 6:
            cout << "Junio" << endl;
            cout << "30 dias" << endl;
            break;
        case 7:
            cout << "Julio" << endl;
            cout << "31 dias" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            cout << "31 dias" << endl;
            break;
        case 9:
            cout << "Septiembre" << endl;
            cout << "30 dias" << endl;
            break;
        case 10:
            cout << "Octubre" << endl;
            cout << "31 dias" << endl;
            break;
        case 11:
            cout << "Noviembre" << endl;
            cout << "30 dias" << endl;
            break;
        case 12:
            cout << "Diciembre" << endl;
            cout << "31 dias" << endl;
            break;
        default:
            cout << "El numero de mes no corresponde con ningun numero de 1-12" << endl;
            break;
    }
    cin >> numMes;
    return 0;
}