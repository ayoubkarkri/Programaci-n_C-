
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(NULL));

	int array[5][10][15][20];

	for (int i = 0; i < 5; i ++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 15; z++) {
				for (int q = 0; q < 20; q++) {
					array[i][y][z][q] = rand();
				}
			}
		}
	}



}