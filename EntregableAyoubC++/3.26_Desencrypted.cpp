
#include <iostream>
#include <array>
#include <string> // Necesario para usar to_string()
#include <algorithm> // Para usar swap, aunque ya funciona sin esta declaración

/*
    <algorithm> es una librería de C++ que contiene funciones ya creadas para trabajar con datos.
    Por ejemplo, incluye:
        - swap() → intercambia dos valores.
        - sort() → ordena elementos.
        - max() → devuelve el valor mayor.
        - min() → devuelve el valor menor.
    Eso si, puede funcionar igualmente porque alguna otra librería incluida puede estar
    haciendo que swap() esté disponible indirectamente. Pero lo correcto es añadirlo, de esta
    manera nos aseguramos que el código tiene acceso a swap() de forma adecuada.
*/

using namespace std;

int main() {

    int numberToEncrypt;
    cout << "Enter a four-digit number that you want to encrypt :" << endl;
    cin >> numberToEncrypt;

    while (to_string(numberToEncrypt).length() != 4 || numberToEncrypt < 0) {
        cout << "Please try again. Enter a FOUR-digit number: ";
        cin >> numberToEncrypt;
    }

    string digits = to_string(numberToEncrypt);

    //Encriptamos
    array<int, 4> numbers;

    for (int i = 0; i < 4; i++) {

        numbers[i] = (digits[i] - '0' + 7) % 10;

        /*
        numbers[i] = (digits[i] +7) %10;

        ¡MAL! digits[i] es un carácter (char), no un número entero. Se debe de convertir a entero restando '0'.
        Porque los caracteres '0', '1', etc. tienen códigos numéricos distintos de sus valores enteros.
        */
    }

    //Intercambiamos valores : swap() sirve para intercambiar los valores de dos variables
    swap(numbers[0], numbers[2]);
    swap(numbers[1], numbers[3]);

    cout << "The encrypted number is: ";

    for (int i = 0; i < 4; i++) {
        cout << numbers[i];
    }

    cout << endl;

    string ansewer2;
    cout << "Do you want to desencrypt this number that we are encryted now? Say YES or NO ";
    cin >> ansewer2;

    while (ansewer2 != "YES" && ansewer2 != "NO") {
        cout << "Incorrect ansewer. Please, say Yes or No. \n";
        cin >> ansewer2;
    }

    int desencrypted[4];

    if (ansewer2 == "YES") {

        swap(numbers[2], numbers[0]);
        swap(numbers[3], numbers[1]);

        for (int i = 0; i < 4; i++) {
            desencrypted[i] = (numbers[i] + 3) % 10;
        }

        /*
        int desencrypt1 = (10 * digits[0]) - 7;
        int desencrypt2 = (10 * digits[1]) - 7;
        int desencrypt3 = (10 * digits[2]) - 7;
        int desencrypt4 = (10 * digits[3]) - 7;
        */

        cout << "Number desencryted is : ";

        for (int i = 0; i < 4; i++) {
            cout << desencrypted[i];
        }

        cout << endl;
    }

    else if (ansewer2 == "NO") {
        cout << "Perfect. We don't will desencrypt the number.";
        return 0;
    }

    return 0;
}
