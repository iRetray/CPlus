#include <iostream>
using namespace std;

double promedio(int numEst){
    double promedio=0.0;
    double nota=0.0;
    for (int i = 1; i < 4; ++i) {
        cout<<"Nota "<<i<<" del estudiante # "<<numEst+1<<":"<<endl;
        cin>>nota;
        promedio=promedio+nota;
    }
    promedio=promedio/3;
    return promedio;
}

int main() {
    int cant;
    cout<<"¿Cuantos estudiantes desea calcular?"<<endl;
    cin>>cant;
    int repeticiones=cant;
    double estudiantes[cant][1];
    for (int i = 0; i < repeticiones; i=i+1) {
        estudiantes[i][1]={promedio(i)};
    }
    int estSuper=0;
    for (int j = 0; j < repeticiones; ++j) {
        cout<<"Estudiante # "<<j+1<<"   Promedio: "<<estudiantes[j][1]<<endl;
        if (estudiantes[j][1]>=3.0){
            estSuper++;
        }
    }
    cout<<"El numero de estudiantes con promedio superior o igual a 3.0 es:"<<estSuper<<endl;
}