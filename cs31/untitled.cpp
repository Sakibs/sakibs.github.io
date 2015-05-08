#include <iostream>
#include <string>
using namespace std;

int main () {
	double mysteryCandy = 3.5;
	// I ate half of a snickers :(

	// Weird spacing for presentation
	const int TYPE_COUNT = 3;
	string candyTypes[] = {"Snickers", "Starburst", "Banana!"};

	for (int i = 0; i < mysteryCandy; i++) {
		cout << candyTypes[i % TYPE_COUNT] << endl;
		candyTypes[i % TYPE_COUNT] = candyTypes[(i+1) % TYPE_COUNT];
	}
}


/* 
Finds first element in an array that is not <= the one before it. Return -1 if no such element.
Give test cases to test this function

given:
		0   1 	2 	3 	4 	5 	6   7
arr = {43, 34, 34, 21, 16, 29, 17,  8}
return: 5
*/
int firstOutOfOrder(int arr[], int size);


/*
Find the first negative element in an array. Return 0 if no negative is in the array.

given:
arr = {3, 5, 1, -9, 2, -6, 4};
return: -9
*/
int getFirstNegative(int arr[], int size);

/* 
Implement compute averages mentioned above
*/

/*
Get all the indexes of a wanted element in a given array. List possible test cases.

given: 
       0  1  2  3  4  5  6  7  8  9
arr = {1, 2, 4, 3, 4, 5, 2, 7, 1, 4}
wanted = 4
return: {2, 4, 9}

What should the function call look like?
*/
