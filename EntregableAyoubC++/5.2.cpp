#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Tarifa mínima 20 $ hasta 3 horas; 5 $ extra por hora (o fracción) a partir de la 3ª;
// máximo 50 $ por 24 horas.
double calculateCharges(double horas) {
    double importe{ 20.0 };

    if (horas > 3.0) {
        importe += 5.0 * ceil(horas - 3.0);
    }
    if (importe > 50.0) {
        importe = 50.0;
    }
    return importe;
}

int main() {
    const int CLIENTES{ 3 };
    double totalHoras{ 0.0 };
    double totalImporte{ 0.0 };
    double horas[CLIENTES];
    double importes[CLIENTES];

    for (int i{ 0 }; i < CLIENTES; ++i) {
        cout << "Horas de estacionamiento del cliente " << (i + 1) << ": ";
        cin >> horas[i];
        importes[i] = calculateCharges(horas[i]);
        totalHoras += horas[i];
        totalImporte += importes[i];
    }

    cout << fixed << setprecision(2) << "\n";
    cout << left << setw(8) << "Car" << right << setw(8) << "Hours" << setw(10) << "Charge" << "\n";

    for (int i{ 0 }; i < CLIENTES; ++i) {
        cout << left << setw(8) << (i + 1)
            << right << setprecision(1) << setw(8) << horas[i]
            << setprecision(2) << setw(10) << importes[i] << "\n";
    }

    cout << left << setw(8) << "TOTAL"
        << right << setprecision(1) << setw(8) << totalHoras
        << setprecision(2) << setw(10) << totalImporte << "\n";
}