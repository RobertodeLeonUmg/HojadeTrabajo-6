#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;
    string distribuidora;
    double precio;

public:
    // El constructor corecto para la clase publica, son las variables de la clase privada, así tenermos un solvente de donde se llama para modificar, sin afectar que serán base para el trabajo
    Libro(string _titulo, string _autor, int _anioPublicacion, string _distribuidora, double _precio) : titulo(_titulo), autor(_autor), anioPublicacion(_anioPublicacion), distribuidora(_distribuidora), precio(_precio) {}

    // Establecesmos metodos, para estabecler que tipos datos serán tomados para llenar nuestra clase libro
    void setTitulo(string _titulo) {
        titulo = _titulo;
    }

    void setAutor(string _autor) {
        autor = _autor;
    }

    void setAnioPublicacion(int _anioPublicacion) {
        anioPublicacion = _anioPublicacion;
    }

    void setDistribuidora(string _distribuidora) {
        distribuidora = _distribuidora;
    }

    void setPrecio(double _precio) {
        precio = _precio;
    }

    // ahora ya no solo establecemos funciones void, sino llenamos los datos con metodos llamados por cada uno de nuestras variables privadas, y con un get antes de llamar
    string getTitulo() const {
        return titulo;
    }

    string getAutor() const {
        return autor;
    }

    int getAnioPublicacion() const {
        return anioPublicacion;
    }

    string getDistribuidora() const {
        return distribuidora;
    }

    double getPrecio() const {
        return precio;
    }

    // Por ultimo establecemos un metodo con una función void, así prollectamos que tomaremos encuenta al momento de llenar datos
    void mostrarInformacion() const {
    	cout << "************************"<< endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Ano de publicacion: " << anioPublicacion << endl;
        cout << "Distribuidora: " << distribuidora << endl;
        cout << "Precio: $" << precio << endl;
    }
};

int main() {
    // Los libros que tomaremos como ejemplo
    Libro libro1("El cuervo", "Edgar Allan Poe", 1845, "New-York Mirror", 4.99);
    Libro libro2("Cien anios de soledad", "Gabriel Garcia Marquez", 1967, "ColombiaEdit", 10.99);
    Libro libro3("Los cuatro acuerdos", "Miguel Ruiz", 2008, "LibrosPanama", 12.33);
    Libro libro4("Hamlet", "William Shakespeare", 1603, "Inglish", 3.99);
    Libro libro5("Romeo y Julieta", "William Shakespeare", 1597, "Inglish", 3.99);

    // Mostrar la información del libro
    libro1.mostrarInformacion();
    libro2.mostrarInformacion();
    libro3.mostrarInformacion();
    libro4.mostrarInformacion();
    libro5.mostrarInformacion();

    return 0;
}

