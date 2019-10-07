#include <iostream>
using namespace std;

class Persona{
public: static string nombre;
public: static int edad;
    Persona(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
    }
};

class Empleado: public Persona{
public: double salario;
    Empleado(string nombre, int edad, string _nombre, int _edad, double _salario) : Persona(nombre, edad) {
        nombre = _nombre;
        edad = _edad;
        salario = _salario;
    }
};

class Estudiante: public Persona{
public: double notas;
    Estudiante(string nombre, int edad, string _nombre, int _edad, double _notas) : Persona(nombre, edad) {
        nombre = _nombre;
        edad = _edad;
        nombre = _notas;
    }
};

class Universitario: public Estudiante{
public: int semestre;
    Universitario(string nombre1, int edad1, string nombre2, int edad2, double notas, string nombre, int edad,
                  string _nombre, int _edad, double _notas, int _semestre) : Estudiante(nombre1, edad1, nombre2, edad2, notas) {
        nombre = _nombre;
        edad = _edad;
        nombre = _notas;
        semestre = _semestre;
    }
};



int main() {

}