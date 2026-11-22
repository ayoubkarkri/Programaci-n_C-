/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
    int numberToCalculate;
    cpp_int factorial = 1; // Inicializado en 1 (nunca en 0), ya que sino multiplicaria por 0
    
    cout << "Introduce a number to calculate its factorial: \n";
    cin >> numberToCalculate;
    
    // Permitimos el 0 (el factorial de 0 es 1)
    while(numberToCalculate<0) {
        cout << "\n\n The number cannot be negative. Pleasem enter the number again: \n";
        cin >> numberToCalculate;
    }
    
    // Usando una variable contador (i) que va desde 1 hasta el número
    int i = 1;
    while (i <= numberToCalculate) {
        factorial = factorial * i;
        i++;
    }
    
    cout << "\nThe factorial of " << numberToCalculate << " is " << factorial << endl;

    return 0;
}