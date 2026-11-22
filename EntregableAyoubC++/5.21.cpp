#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Devuelve 0 para cruz (Tails) y 1 para cara (Heads)
int flip() {
    return rand() % 2;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int caras{ 0 };
    int cruces{ 0 };

    for (int i{ 1 }; i <= 100; ++i) {
        if (flip() == 1) {
            cout << "Heads\n";
            ++caras;
        }
        else {
            cout << "Tails\n";
            ++cruces;
        }
    }

    cout << "\nHeads: " << caras << "\nTails: " << cruces << "\n";
}
