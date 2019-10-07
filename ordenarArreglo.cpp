#include <iostream>
using namespace std;

void ordenarArreglo(int *arreglo){
    int swap;
    for (int k = 0; k < 10; ++k) {
        for (int i = 0; i < 10; ++i) {
            if (i != 9){
                if(arreglo[i]>arreglo[i+1]){
                    swap = arreglo[i];
                    arreglo[i] = arreglo[i+1];
                    arreglo[i+1] = swap;
                }
            }

        }
    }
}

int main() {
    int arreglo_numeros[10]={0,2,3,9,5,6,8,9,1,6};
    ordenarArreglo(arreglo_numeros);
    for (int j = 0; j < 10; ++j) {
        cout<<arreglo_numeros[j]<<endl;
    }

}

