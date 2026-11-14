#include <iostream>
using namespace std;

int invertirCifras(int numero) {
    int invertido{ 0 };

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    return invertido;
}

int main() {
    int numero;
    cout << "Introduce un entero positivo: ";
    cin >> numero;
    cout << "Invertido: " << invertirCifras(numero) << "\n";   // 7631 -> 1367
}
