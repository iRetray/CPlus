#include <iostream>
using namespace std;

double a,b,c,d;

int NumeroMayor(int n1,int n2,int n3,int n4) {
     return max(max(n1,n2),max(n3,n4));
}


int main() {
    cout<<"Ingresa 4 numeros:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<"El numero mayor es: "<<NumeroMayor(a,b,c,d)<<endl;
}


