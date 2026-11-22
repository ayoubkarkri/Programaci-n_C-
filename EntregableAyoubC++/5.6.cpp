#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int n;

    n = 1 + rand() % 2;            // a) 1 <= n <= 2
    cout << "a) " << n << "\n";

    n = 1 + rand() % 100;          // b) 1 <= n <= 100
    cout << "b) " << n << "\n";

    n = rand() % 10;               // c) 0 <= n <= 9
    cout << "c) " << n << "\n";

    n = 1000 + rand() % 113;       // d) 1000 <= n <= 1112
    cout << "d) " << n << "\n";

    n = -1 + rand() % 3;           // e) -1 <= n <= 1
    cout << "e) " << n << "\n";

    n = -3 + rand() % 15;          // f) -3 <= n <= 11
    cout << "f) " << n << "\n";
}
