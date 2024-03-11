#include <iostream>

using namespace std;

class Calculadora {
private:
    double numero1;
    double numero2;

public:
    // el constructor de nuestro trabajo
    Calculadora(double _numero1, double _numero2) : numero1(_numero1), numero2(_numero2) {}

    // Cada metodo sera una operacacion aritmetica, en el unico que ingresamos un if-else, es para verificar que el numero no sea 0
    double suma() const {
        return numero1 + numero2;
    }

    double resta() const {
        return numero1 - numero2;
    }

    double multiplicacion() const {
        return numero1 * numero2;
    }

    double division() const {
        if (numero2 != 0) {
            return numero1 / numero2;
        } else {
            cout << "Error: División por cero." << endl;
            return 0; 
        }
    }
};

int main() {
    //los numeros que ingresaremos a cada calculadora
    Calculadora calculadora1(10, 5);
    Calculadora calculadora2(8, 4);
    Calculadora calculadora3(20, 2);

    // Realizar operaciones y mostrar resultados
    cout << "Suma: " << calculadora1.suma() << endl;
    cout << "Resta: " << calculadora1.resta() << endl;
    cout << "Multiplicacion: " << calculadora1.multiplicacion() << endl;
    cout << "Division: " << calculadora1.division() << endl;
    cout << "************************"<< endl;
    cout << "Suma: " << calculadora2.suma() << endl;
    cout << "Resta: " << calculadora2.resta() << endl;
    cout << "Multiplicacion: " << calculadora2.multiplicacion() << endl;
    cout << "Division: " << calculadora2.division() << endl;
    cout << "************************"<< endl;
    cout << "Suma: " << calculadora3.suma() << endl;
    cout << "Resta: " << calculadora3.resta() << endl;
    cout << "Multiplicacion: " << calculadora3.multiplicacion() << endl;
    cout << "Division: " << calculadora3.division() << endl;

    return 0;
}

