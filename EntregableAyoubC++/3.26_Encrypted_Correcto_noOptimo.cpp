/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <string> // Necesario para usar to_string()
using namespace std;

int main() {
    
    int numberToEncrypt;
    cout << "Enter a four-digit number that you want to encrypt :" << endl;
    cin >> numberToEncrypt;
    
    while (to_string(numberToEncrypt).length() != 4 || numberToEncrypt < 0){
        cout << "Please try again. Enter a FOUR-digit number: ";
        cin >> numberToEncrypt;
    }
    
    int d1 = numberToEncrypt / 1000; 
    int d2 = (numberToEncrypt / 100) % 10;
    int d3 = (numberToEncrypt / 10) % 10;
    int d4 = numberToEncrypt % 10; 
    
    // Sustituimos cada cifra por el resultado de la operación
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;
    
    // Intercambiamos 1ª con 3ª y 2ª con 4ª
    int temporal1 = d1;
    d1 = d3;
    d3 = temporal1;

    int temporal2 = d2;
    d2 = d4;
    d4 = temporal2;
    
    cout << "The encrypted number is: " << d1 << d2 << d3 << d4 << endl;
    
    return 0;
}