/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <cmath> // Libreria para poder usar la función pow(base,exonente)
using namespace std;

int main() {
    
    int terms;
    cout << "Enter the number of terms to approximate e: ";
    cin >> terms;
    
    while (terms <= 0) {
        cout << "The number of terms must be greater than 0. Please enter again: ";
        cin >> terms;
    }
    
    double x;
    cout << "Enter the value of x :" << endl;
    cin >> x;
    
    double ex = 1.0;    
    double factorial = 1.0; 
    int i = 1;
    while (i<terms) {
        factorial = factorial * i;
        ex=ex + (pow(x,i)/factorial);
        i++;
    }
    

    cout << "The approximate value of e^" << x << " with " << terms << " terms is: " << ex << endl;

    return 0;
    
}