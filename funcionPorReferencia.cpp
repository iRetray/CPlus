#include <iostream>
using namespace std;

int cantPositivos=0;

void Positivos(int &cPos){
    while(true){
        int num;
        cin>>num;
        if(num==0){
            break;
        }
        else{
            if(num>0){
                cPos++;
            }
        }
    }
}


int main() {
    cout<<"Ingresa los numeros que desees, ingresa 0 para finalizar"<<endl;
    Positivos(cantPositivos);
    cout<<"Se ingresaron "<<cantPositivos<<" numeros positivos"<<endl;
}


