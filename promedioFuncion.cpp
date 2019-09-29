#include <iostream>
using namespace std;

double a,b,c,d,e;

double Promedio(double v1,double v2, double v3, double v4, double v5) {
    double promedio;
    promedio = (v1 + v2 + v3 + v4 + v5) / 5;
    return promedio;
}

int main() {
    cout<<"Ingresa 5 valores numericos decimales:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cout<<"El promedio de esos 5 valores es: "<<Promedio(a,b,c,d,e)<<endl;
}


