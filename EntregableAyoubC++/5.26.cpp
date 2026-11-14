#include <iostream>
using namespace std;

// Mueve 'n' discos desde la varilla 'origen' hasta 'destino' usando 'auxiliar' como soporte
void hanoi(int n, int origen, int destino, int auxiliar) {
    if (n == 1) {                       // caso base: mover un disco directamente
        cout << origen << " -> " << destino << "\n";
        return;
    }
    hanoi(n - 1, origen, auxiliar, destino);   // a) n-1 discos a la varilla auxiliar
    cout << origen << " -> " << destino << "\n"; // b) el disco mayor al destino
    hanoi(n - 1, auxiliar, destino, origen);   // c) n-1 discos desde la auxiliar al destino
}

int main() {
    int discos;
    cout << "Numero de discos: ";
    cin >> discos;
    hanoi(discos, 1, 3, 2);
}
