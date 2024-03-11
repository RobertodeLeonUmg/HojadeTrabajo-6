#include <iostream>
#include <string>

using namespace std;

// Definición de la clase CuentaBancaria
class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    // Constructor
    CuentaBancaria(string _nombreTitular, string _numeroCuenta, double _saldo) : nombreTitular(_nombreTitular), numeroCuenta(_numeroCuenta), saldo(_saldo) {}

    // el deposito de nuestro dinero, agregando a el dinero base que ya tenemos
    void depositar(double cantidad) {
        saldo += cantidad;
        cout << "Depósito de " << cantidad << " realizado." << endl;
    }

    // el retirar dinero no es solo por asi, gracias a que puede ver, que la cantidad de la cuenta sea la necesaria para que exista una salida de dine, sino sera insuficiente
    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            cout << "************************"<< endl;
            cout << "Retiro de " << cantidad << " realizado." << endl;
        } else {
            cout << "Error: Saldo insuficiente." << endl;
        }
    }

    // el metodo que entra nuestra cuenta respecta al saldo, sea antes de todo el proceso de salida, o cuando ya a sido modifiacada el ingreso de datos
    double consultarSaldo() const {
        return saldo;
    }
};

int main() {
    // creamos los datos que tendra cada cuenta
    CuentaBancaria cuenta1("Matin Guerrero", "3216549871", 5000.0);
    CuentaBancaria cuenta2("Juan Pérez", "1234567890", 10000.0);
    CuentaBancaria cuenta3("Juan Pérez", "9876543210", 20000.0);
    CuentaBancaria cuenta4("Juan Pérez", "6543219871", 2000.0);

    //Nuestra cuenta base
    cout << "************************"<< endl;
    cout << "Saldo inicial: " << cuenta1.consultarSaldo() << endl;
    cout << "Saldo inicial: " << cuenta2.consultarSaldo() << endl;
    cout << "Saldo inicial: " << cuenta3.consultarSaldo() << endl;
    cout << "Saldo inicial: " << cuenta4.consultarSaldo() << endl;

    cuenta1.depositar(500);
    cuenta1.retirar(1500); 
    cuenta2.depositar(1000);
    cuenta2.retirar(2000);
    cuenta2.retirar(5000);
    cuenta3.depositar(500);
    cuenta3.retirar(200);
    cuenta3.retirar(1500);
    cuenta4.depositar(500);
    cuenta4.retirar(1500);

    // Establecemos una salida, y como este modificara nuestra cuenta
    cout << "************************"<< endl;
    cout << "Saldo actual: " << cuenta1.consultarSaldo() << endl;
    cout << "************************"<< endl;
    cout << "Saldo actual: " << cuenta2.consultarSaldo() << endl;
    cout << "************************"<< endl;
    cout << "Saldo actual: " << cuenta3.consultarSaldo() << endl;
    cout << "************************"<< endl;
    cout << "Saldo actual: " << cuenta4.consultarSaldo() << endl;

    return 0;
}

