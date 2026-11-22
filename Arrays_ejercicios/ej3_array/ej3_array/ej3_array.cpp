
#include <iostream>
using namespace std;

int main() {

	int array[200];
	
	// Mostrar el array desde el inicio hasta el final
	for (int i = 0; i < 200; i++) {
		array[i] = i * i;
		cout << array[i] << " ";
	}

	cout << endl << endl;


	// Mostrar el array desde el final hasta el inicio
	for (int i = 200 - 1; i > 0; i-- ) {
		array[i] = i * i;
		cout << array[i] << " ";
	}
}