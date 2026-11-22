#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int TOTAL_TERMINOS{ 200000 };
    double pi{ 0.0 };
    int signo{ 1 };
    int primerTermino{ -1 };   // primer término cuyo valor empieza por 3.14159

    cout << "Accuracy set at: " << TOTAL_TERMINOS << "\n\n";
    cout << "term\tpi\n";
    cout << fixed << setprecision(8);

    for (int term{ 1 }; term <= TOTAL_TERMINOS; ++term) {
        pi += signo * 4.0 / (2 * term - 1);
        signo = -signo;

        cout << term << "\t" << pi << "\n";

        // Empieza por 3.14159 si 3.14159 <= pi < 3.14160
        if (primerTermino == -1 && pi >= 3.14159 && pi < 3.14160) {
            primerTermino = term;
        }
    }

    if (primerTermino != -1) {
        cout << "\nPrimer valor que empieza por 3.14159 en el termino: "
            << primerTermino << "\n";
    }
    else {
        cout << "\nNo se obtuvo un valor que empiece por 3.14159.\n";
    }
}

