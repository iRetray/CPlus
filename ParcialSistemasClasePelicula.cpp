#include <iostream>
using namespace std;

class Serie{
private:
    string titulo;
    int numeroTemporadas;
    bool entregado;
    string genero;
    string creador;
    string personaQueLaTiene;

public:

    Serie(){
        titulo = "";
        numeroTemporadas = 3;
        entregado = false;
        genero = "";
        creador = "";
        personaQueLaTiene = "";
    }

    Serie(string _titulo, string _creador){
        titulo = _titulo;
        numeroTemporadas = 3;
        entregado = false;
        genero = "";
        creador = _creador;
    }

    Serie(string _titulo, int _numeroTemporadas, string _genero,string _creador){
        titulo = _titulo;
        numeroTemporadas = _numeroTemporadas;
        entregado = false;
        genero = _genero;
        creador = _creador;
    }

    string getTitulo() {
        return titulo;
    }

    int getNumeroTemporadas() {
        return numeroTemporadas;
    }

    string getGenero() {
        return genero;
    }

    string getCreador() {
        return creador;
    }

    void setTitulo(string newTitulo) {
        titulo = newTitulo;
    }

    void setNumeroTemporadas(int newNumeroTemporadas) {
        numeroTemporadas = newNumeroTemporadas;
    }

    void setGenero(string newGenero) {
        genero = newGenero;
    }

    void setCreador(string newCreador) {
        creador = newCreador;
    }

    bool peliculaEstaEntregada(){
        return entregado;
    }

    void peliculaPrestadaPor(string nombrePersona){
        personaQueLaTiene = nombrePersona;
    }

    void alguienPrestoLaPelicula(){
        entregado = true;
    }

    void alguienDevolvioLaPelicula(){
        entregado = false;
    }

    string getPersonaPrestada(){
        return personaQueLaTiene;
    }

};

Serie titanic = Serie("Titanic", 1,"Drama", "James Cameron");
Serie starwars = Serie("Star Wars", 15,"Ficcion", "LuscasFilm");
Serie reyleon = Serie("El rey leon", 1,"Aventura", "Walt Disney");
Serie vengadores = Serie("Los vengadores", 4,"Accion", "Marvel Studios");

Serie listaPeliculas[4];


void darInformePeliculas() {
    for(int i=0;i<=3;i++){
        cout << "" << endl;
        cout << "Pelicula: " << listaPeliculas[i].getTitulo() << endl;
        cout << "Temporadas: " << listaPeliculas[i].getNumeroTemporadas() << endl;
        cout << "Genero: " << listaPeliculas[i].getGenero() << endl;
        cout << "Creador: " << listaPeliculas[i].getCreador() << endl;
        if(!listaPeliculas[i].peliculaEstaEntregada()){
            cout << "Disponible para prestar" << endl;
        } else {
            cout << "La pelicula esta prestada por: "<< listaPeliculas[i].getPersonaPrestada() << endl;
        }
    }
    cout << "---------------------------------" << endl;
}

void prestarPelicula() {
    int prestado=0;
    char *nombre="";
    cout << "Escribe el codigo de la pelicula que quieres prestar" << endl;
    for(int i=0;i<=3;i++){
        if(!listaPeliculas[i].peliculaEstaEntregada()){
            cout << "Codigo "<<i<<", Pelicula: " << listaPeliculas[i].getTitulo() << endl;
        }
    }
    cin >> prestado;
    if(prestado == 0){
        cout << "Ingresa tu nombre" << endl;
        cin >> nombre;
        listaPeliculas[0].peliculaPrestadaPor(nombre);
        listaPeliculas[0].alguienPrestoLaPelicula();
        cout << "La pelicula ha sido prestada a tu nombre" << endl;
    }
    if(prestado == 1){
        cout << "Ingresa tu nombre" << endl;
        cin.getline(nombre, 50);
        cin.getline(nombre,40);
        listaPeliculas[1].peliculaPrestadaPor(nombre);
        listaPeliculas[1].alguienPrestoLaPelicula();
        cout << "La pelicula ha sido prestada a tu nombre" << endl;
    }
    if(prestado == 2){
        cout << "Ingresa tu nombre" << endl;
        cin >> nombre;
        listaPeliculas[2].peliculaPrestadaPor(nombre);
        listaPeliculas[2].alguienPrestoLaPelicula();
        cout << "La pelicula ha sido prestada a tu nombre" << endl;
    }
    if(prestado == 3){
        cout << "Ingresa tu nombre" << endl;
        cin >> nombre;
        listaPeliculas[3].peliculaPrestadaPor(nombre);
        listaPeliculas[3].alguienPrestoLaPelicula();
        cout << "La pelicula ha sido prestada a tu nombre" << endl;
    }
}

void devolverPelicula() {
    int prestado=0;
    cout << "Escribe el codigo de la pelicula que quieres devolver" << endl;
    for(int i=0;i<=3;i++){
        if(listaPeliculas[i].peliculaEstaEntregada()){
            cout << "Codigo "<<i<<", Pelicula: " << listaPeliculas[i].getTitulo() <<", prestada por: "<<listaPeliculas[i].getPersonaPrestada()<< endl;
        }
    }
    cin >> prestado;
    if(prestado == 0){
        listaPeliculas[0].alguienDevolvioLaPelicula();
        listaPeliculas[0].peliculaPrestadaPor("");
        cout << "La pelicula ha sido devuelta" << endl;
    }
    if(prestado == 1){
        listaPeliculas[1].alguienDevolvioLaPelicula();
        listaPeliculas[1].peliculaPrestadaPor("");
        cout << "La pelicula ha sido devuelta" << endl;
    }
    if(prestado == 2){
        listaPeliculas[2].alguienDevolvioLaPelicula();
        listaPeliculas[2].peliculaPrestadaPor("");
        cout << "La pelicula ha sido devuelta" << endl;
    }
    if(prestado == 3){
        listaPeliculas[3].alguienDevolvioLaPelicula();
        listaPeliculas[3].peliculaPrestadaPor("");
        cout << "La pelicula ha sido devuelta" << endl;
    }
}

void opciones(){
    int eleccion=0;
    cout << "---------------------------------" << endl;
    cout << "Elige una opcion" << endl;
    cout << "1  Ver estado de las peliculas" << endl;
    cout << "2  Prestar una pelicula" << endl;
    cout << "3  Devolver una pelicula" << endl;
    cout << "Escribe otro valor para salir" << endl;
    cin >> eleccion;
    if(eleccion == 1){
        darInformePeliculas();
    } else{
        if(eleccion == 2){
            prestarPelicula();
        } else {
            if(eleccion == 3){
                devolverPelicula();
            }
        }
    }


}

int main() {

    listaPeliculas[0] = titanic;
    listaPeliculas[1] = starwars;
    listaPeliculas[2] = reyleon;
    listaPeliculas[3] = vengadores;

    cout << "Aplicacion para prestar peliculas" << endl;
    cout << "---------------------------------" << endl;
    cout << "" << endl;
    while(true){
        opciones();
    }
}
