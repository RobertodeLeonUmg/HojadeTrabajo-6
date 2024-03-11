#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int anioLanzamiento;
    string actorPrincipal;
    float recaudacion;

public:
    // Constructor de nuestra clase publica, con variantes de nuestra clase privada de la clase peliculas
    Pelicula(string _titulo, string _director, int _anioLanzamiento, string _actorPrincipal, double _recaudacion)
        : titulo(_titulo), director(_director), anioLanzamiento(_anioLanzamiento), actorPrincipal(_actorPrincipal), recaudacion(_recaudacion) {}

    // Métodos para establecer los datos de la película
    void setTitulo(string _titulo) {
        titulo = _titulo;
    }

    void setDirector(string _director) {
        director = _director;
    }

    void setAnioLanzamiento(int _anioLanzamiento) {
        anioLanzamiento = _anioLanzamiento;
    }

    void setActorPrincipal(string _actorPrincipal) {
        actorPrincipal = _actorPrincipal;
    }

    void setRecaudacion(double _recaudacion) {
        recaudacion = _recaudacion;
    }

    // Métodos para obtener los datos de la película
    string getTitulo() const {
        return titulo;
    }

    string getDirector() const {
        return director;
    }

    int getAnioLanzamiento() const {
        return anioLanzamiento;
    }

    string getActorPrincipal() const {
        return actorPrincipal;
    }

    double getRecaudacion() const {
        return recaudacion;
    }

    // Método para mostrar la información de la película
    void mostrarInformacion() const {
    	cout << "************************"<< endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Ano de lanzamiento: " << anioLanzamiento << endl;
        cout << "Actor Principal: " << actorPrincipal << endl;
        cout << "Recaudacion: $" << recaudacion << endl;
    }
};

int main() {
    // Crear un objeto Pelicula
    Pelicula pelicula1("El Padrino", "Francis Ford Coppola", 1972, "Marlon Brando", 24500000);
    Pelicula pelicula2("Avengers", "Josh Weedon", 2010, "Robert Dawni Jr", 150000000);
    Pelicula pelicula3("Dune", "Denis Villeneuve", 2022, "Timothée Chalamet", 200000000);

    // Mostrar la información de la película
    pelicula1.mostrarInformacion();
    pelicula2.mostrarInformacion();
    pelicula3.mostrarInformacion();

    // Modifiacmos nuestro metodo anterior, y los datos que habia dentro
    pelicula1.setActorPrincipal("Al Pacino");
    pelicula1.setRecaudacion(30000000);
    pelicula2.setActorPrincipal("Chris Evans");
    pelicula2.setRecaudacion(300000000);
    pelicula3.setActorPrincipal("Zendaya");
    pelicula3.setRecaudacion(400000000);

    // Mostrar la información actualizada de la película
    pelicula1.mostrarInformacion();
    pelicula2.mostrarInformacion();
    pelicula3.mostrarInformacion();

    return 0;
}

