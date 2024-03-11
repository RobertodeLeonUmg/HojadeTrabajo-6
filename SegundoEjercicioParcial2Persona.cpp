#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    int curso;
    char seccion;
    string horario;

public:
    // El constructor corecto para la clase publica, son las variables de la clase privada, así tenermos un solvente de donde se llama para modificar, sin afectar que serán base para el trabajo
    Estudiante(string _nombre, string _apellido, int _edad, int _curso, char _seccion, string _horario)
        : nombre(_nombre), apellido(_apellido), edad(_edad), curso(_curso), seccion(_seccion), horario(_horario) {}

    // Establecesmos metodos, para estabecler que tipos datos serán tomados para llenar nuestra clase estudiante
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    void setApellido(string _apellido) {
        apellido = _apellido;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    void setCurso(int _curso) {
        curso = _curso;
    }

    void setSeccion(char _seccion) {
        seccion = _seccion;
    }

    void setHorario(string _horario) {
        horario = _horario;
    }

    // Seran 5 metodos para que sean 5 valores que se ingresen, como datos de nuestro programa
    string getNombre() const {
        return nombre;
    }

    string getApellido() const {
        return apellido;
    }

    int getEdad() const {
        return edad;
    }

    int getCurso() const {
        return curso;
    }

    char getSeccion() const {
        return seccion;
    }

    string getHorario() const {
        return horario;
    }

    // son 5 valores los cuales seran leidos en nuestra pantalla,como estudiante de Universidad existen varios, y estos son los mas importantes
    void mostrarInformacion() const {
    	cout << "************************"<< endl;
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Curso: " << curso << ", Seccion: " << seccion << endl;
        cout << "Horario: " << horario << endl;
    }
};

int main() {
    // Establecemos los datos principales de nuestro estudiante
    Estudiante estudiante1("Roberto", "de Leon", 20, 3, 'A', "Lunes, Miercoles, y Viernes 07:00 - 12:00");
    Estudiante estudiante2("Angelyn", "Zecena", 19, 3, 'A', "Lunes, Miercoles, y Viernes 07:00 - 12:00");
    Estudiante estudiante3("James", "Bagorguez", 19, 3, 'A', "Lunes, Miercoles, y Viernes 07:00 - 12:00");
    Estudiante estudiante4("Gian", "Mazariegos", 20, 3, 'B', "Lunes, Miercoles, y Viernes 07:00 - 12:00");

    // llamamos a pantalla los datos pricipales
    estudiante1.mostrarInformacion();

    // ingressamos nuesvos datos, para definir que existen dos horarios diferentes, unos en linea y otros en presencial
    estudiante1.setHorario("Martes y Jueves 08:30 - 12:00");
    estudiante2.setHorario("Martes y Jueves 08:30 - 12:00");
    estudiante3.setHorario("Martes y Jueves 08:30 - 12:00");
    estudiante4.setHorario("Martes y Jueves 08:30 - 12:00");

    // ahora volvemos a mandar datos para presentar en pantalla, con los nuevos datos 
    estudiante1.mostrarInformacion();
    estudiante2.mostrarInformacion();
    estudiante3.mostrarInformacion();
    estudiante4.mostrarInformacion();

    return 0;
}

