#include <iostream>
using namespace std;

int main() {
    long long producto{ 1 };

    for (int i{ 1 }; i <= 15; i += 2) {
        producto *= i;
    }

    cout << "El producto de los enteros impares del 1 al 15 es: "
        << producto << "\n";   // 2027025
}


