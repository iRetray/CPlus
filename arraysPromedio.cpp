#include <iostream>
using namespace std;

void recibirNumeros(int *numeros, int size){
    int valor;
    for (int i = 0; i <size;  i++) {
        cout<<"Numero "<<i+1<<":"<<endl;
        cin>>valor;
        numeros[i]=valor;
    }
}

double promedio(int numeros[], int size){
    double promedio=0;
    for (int i = 0; i < size; ++i) {
        promedio=promedio+numeros[i];
    }
    promedio=promedio/(size);
    return promedio;
}

int numeroMayor(int numeros[],int size){
    int mayor;
    for (int i = 0; i < size; ++i) {
        if (numeros[i]>mayor){
            mayor=numeros[i];
        }
    }
    return mayor;
}

int numeroMenor(int numeros[],int size){
    int menor;
    for (int i = 0; i < size; ++i) {
        if (numeros[i]<menor){
            menor=numeros[i];
        }
    }
    return menor;
}

int main() {
    int num;
    cout<<"¿Cuantos numeros quieres ingresar?"<<endl;
    cin>>num;
    int nums[num];
    recibirNumeros(nums,num);
    cout<<"El promedio es: "<<promedio(nums,num)<<endl;
    cout<<"El numero menor es: "<<numeroMenor(nums,num)<<endl;
    cout<<"El numero mayor es: "<<numeroMayor(nums,num)<<endl;
}