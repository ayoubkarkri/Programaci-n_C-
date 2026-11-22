
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// FUNCIONES

void showMenu() {
	cout << "\n\n=================================\n";
	cout << "         MENU DEL JUGADOR\n";
	cout << "=================================\n\n";

	cout << "1 . Regenerate the values from array." << endl;
	cout << "2 . I want to know the exact value of an array element." << endl;
	cout << "3 . Sum all the values in the array." << endl;
	cout << "4 . Change the value at a specific position in the array." << endl;
	cout << "5 . Close the program. " << endl << endl;
}

void llenarArray(int array[5][10][15][20]) {
	for (int i = 0; i < 5; i++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 15; z++) {
				for (int q = 0; q < 20; q++) {
					array[i][y][z][q] = rand();
				}
			}
		}
	}
}

bool comprobarPosiciones(int a, int b, int c, int d) {
	/*
	if (a >= 0 && a<5
		&& b >= 0 && b < 10 
		&& c >= 0 && c < 15
		&& d >=0 && d < 20) {
		return true;
	}
	else return false;
	*/

	// Más optimizado:
	return (a >= 0 && a < 5 &&
		b >= 0 && b < 10 &&
		c >= 0 && c < 15 &&
		d >= 0 && d < 20);
}

int sumAllElements(int array[5][10][15][20]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 15; z++) {
				for (int q = 0; q < 20; q++) {
					sum += array[i][y][z][q];
				}
			}
		}
	}
	return sum;
}


int main() {

	srand(time(NULL));

	int array[5][10][15][20];

	llenarArray(array);
	
	int answer;

	do {
		showMenu();

		cout << "Choose an option:";
		cin >> answer;

		while (answer < 1 || answer >5) {
			cout << "Please, select one option between 1 and 5: " << endl << endl;
			cin >> answer;
		}

		int a, b, c, d;

		switch (answer) {
		case 1: {

			llenarArray(array);
			cout << "\nValues have been regenerated.";
			break;
		}
		case 2: {
			cout << "\nThere are exist 4 position from this array.Please give the position 1 (0 - 4) : ";
			cin >> a;
			cout << "Give me the position 2 (0-9): ";
			cin >> b;
			cout << "Give me the position 3 (0-14): ";
			cin >> c;
			cout << "Give me the position 4 (0-19): ";
			cin >> d;

			if (comprobarPosiciones(a, b, c, d)) {
				cout << "The value from de position " << a << " " << b << " " << c << " " << d << " are :" << array[a][b][c][d];
			}
			else cout << "Invalid position";
			break;
		}
		case 3: {
			cout << "\nThe sum of all values in the four-dimensional array is : " << sumAllElements(array);
			break;
		}
		case 4: {
			cout << "\nThis is a four-dimensional array. I need the specific position from array to change value.\n";
			cout << "Please, give me the position 1 (0-4): ";
			cin >> a;
			cout << "Please, give me the position 2 (0-9): ";
			cin >> b;
			cout << "Please, give me the position 3 (0-14): ";
			cin >> c;
			cout << "Please, give me the position 4 (0-19): ";
			cin >> d;

			int valueToChange;
			if (comprobarPosiciones(a, b, c, d)) {
				cout << "Perfect! Which value do you want to write in this array element?" << endl;
				cin >> valueToChange;
				array[a][b][c][d] = valueToChange;
				cout << "The value has been changed";
			}
			else cout << "Invalid position";

			break;
		}
		}

	} while (answer != 5);
	
	return 0;
}