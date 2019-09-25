#include <iostream>
using namespace std;

double largo;
double ancho;

class Rectangulo {
public: double largo, ancho;
    Rectangulo(double largo_, double ancho_){
        largo = largo_;
        ancho = ancho_;
    }
    double perimetro(){
        return (largo*2)+(ancho*2);
    }
    double area(){
        return (largo*ancho);
    }
};

int main() {
    cout << "Creacion de un objeto Rectangulo" << endl;
    cout << "Ingresa el largo (en decimal):";
    cin >> largo;
    cout << "Ingresa el ancho (en decimal):";
    cin >> ancho;
    Rectangulo miRectangulo(largo,ancho);
    cout << "El perimetro del rectangulo es: " << miRectangulo.perimetro() << endl;
    cout << "El area del rectangulo es: " << miRectangulo.area() << endl;
}

