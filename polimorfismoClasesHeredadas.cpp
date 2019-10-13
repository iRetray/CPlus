#include <iostream>
using namespace std;

//Clase padre Animal

class Animal{
    private:
        int peso{};
        double altura{};
    public:
        Animal(int peso, double altura);
        Animal();
        virtual void comer();
};

Animal::Animal(int _peso, double _altura) {
    _peso = peso;
    _altura = altura;
}

void Animal::comer() {
    cout<<"Caractersiticas del animal:"<<endl;
    cout<<"Peso: "<<peso<<endl;
    cout<<"Altura: "<<altura<<endl;
}

//Clase hijo Humano

class Humano : public Animal{
    public:
        string comida;
    private:
        Humano(int peso, double altura, string comida);
        void comer();
};

Humano::Humano(int _peso, double _altura, string _comida) : Animal(_peso, _altura) {
    _comida = comida;
}

void Humano::comer() {
    cout<<"El humano come: "<<comida<<endl;
}

//Clase hijo Perro

class Perro : public Animal{
public:
    string comida;
private:
    Perro(int peso, double altura, string comida);
    void comer();
};

Perro::Perro(int _peso, double _altura, string _comida) : Animal(_peso, _altura) {
    _comida = comida;
}

void Perro::comer() {
    cout<<"El perro come: "<<comida<<endl;
}
