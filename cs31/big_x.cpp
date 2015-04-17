#include <iostream>
using namespace std;
 
int main() {
	int SIZE = 5;
 
	// outer loop is which row we are printing
	for (int i = 1; i <= SIZE; i++) {
 
		// inner loop is column being printed
		for (int j = 1; j <= SIZE; j++) {
 
			// Check if in position to print X
			if (i == j || (i+j) == (SIZE + 1))
				cout << 'X';
			// space otherwise
			else
				cout << ' ';
 
		}
		// we finished printing a row, move to the next row
		cout << endl;
	}
}
 