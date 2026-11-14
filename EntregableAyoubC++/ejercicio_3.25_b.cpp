/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;

int main() {
    int terms;
    cout << "Enter the number of terms to approximate e: ";
    cin >> terms;

    // Comprobar que el numero introducido no es negativo
    while (terms <= 0) {
        cout << "The number of terms must be greater than 0. Please enter again: ";
        cin >> terms;
    }

    double e = 1.0;    
    double factorial = 1.0; 
    int i = 1;          

    // Bucle while para sumar los términos de la serie
    while (i < terms) {
        factorial = factorial * i; // Calcula el factorial (1!, 2!, 3!...)
        e = e + (1.0 / factorial);  // 1+1/!1 + 1/!2 + 1/!3 ...)
        i++;
    }

    cout << "The approximate value of e with " << terms << " terms is: " << e << endl;

    return 0;
}