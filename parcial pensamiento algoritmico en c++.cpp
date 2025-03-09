#include <iostream>
using namespace std;
//En este caso se hace un programa que recibe una cantidad de nanosegundos y determina si es de alta, media o baja reactividad
//En la siguiente linea se hace el ingreso de las variables 
int main() {
    float t;
// se pide al usuario que ingrese la cantidad de nanosegundos
    cout << "ingrese la cantidad de nanosegundo" << endl;
    cin >> t;
//se hace la conversion del dato para darlo en segundos
    float tmedio = t / 1e9;
//se hace la comparacion de la cantidad de segundos para determinar si es de alta, media o baja reactividad
    if (tmedio <= 1) {
        cout << "tiene una vida media de alta reactividad" << endl;
    } else if (tmedio <= 86400) {
        cout << "tiene una vida media de media reactividad" << endl;
    } else {
        cout << "tiene una vida media de baja reactividad" << endl;
    }
    return 0;
}