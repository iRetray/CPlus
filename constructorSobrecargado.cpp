#include <iostream>
using namespace std;

int numero;



class Tiempo{
    public: int hora;
    public: int minuto;
    public: int segundo;

    private: int darHoras(long &segTot){
        int hora=0;
        while(segTot>=3600){
            hora++;
            segTot=segTot-3600;
        }
        return hora;
    }

    private: int darMinutos(long &segTot){
        int minuto=0;
        while(segTot>=60){
            minuto++;
            segTot=segTot-60;
        }
        return minuto;
    }

    public:Tiempo(int _hora, int _minuto, int _segundo){
        hora = _hora;
        minuto = _minuto;
        segundo = _segundo;
    }

    public: Tiempo(long segundosTotales){
        hora = darHoras(segundosTotales);
        minuto = darMinutos(segundosTotales);
        segundo = segundosTotales;
    }
};

int main() {
    Tiempo time1=Tiempo(12543);
    cout<<"Horas: "<<time1.hora<<endl;
    cout<<"Minutos: "<<time1.minuto<<endl;
    cout<<"Segundos: "<<time1.segundo<<endl;
}


