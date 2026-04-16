#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Variables para decimales
    double radio, areaCirculo, areaCirculo2, lado, areaCuadrado;
    // Variables para enteros
    int base, altura, areaTriangulo;

    // --- ÁREA DEL CÍRCULO ---
    cout << "--- Area del circulo ---" << endl;
    cout << "Por favor, digite el valor del radio: ";
    cin >> radio;

    areaCirculo = 3.1416 * radio * radio;
    areaCirculo2 = 3.1416 * pow(radio, 2);

    cout << "Su area (metodo 1) es: " << areaCirculo << endl;
    cout << "Su area (metodo 2) es: " << areaCirculo2 << endl << endl;

    // --- ÁREA DEL CUADRADO ---
    cout << "--- Area del cuadrado ---" << endl;
    cout << "Digite el valor del lado: ";
    cin >> lado;

    areaCuadrado = pow(lado, 2);
    cout << "Su area es: " << areaCuadrado << endl << endl;

    // --- ÁREA DEL TRIÁNGULO ---
    cout << "--- Area del triangulo ---" << endl;
    cout << "Digite la base: ";
    cin >> base;
    cout << "Digite la altura: ";
    cin >> altura;

    areaTriangulo = (base * altura) / 2;
    cout << "Su area es: " << areaTriangulo << endl;

    return 0;
}