#include <iostream>
#include <string>
using namespace std;

/*******************************
 Function Declaration
 *******************************/

/*
 Finds the index of the first element in an array that is not <= the one before it. Return -1 if no such element.
 Give test cases to test this function
 
 ex: given:
 0   1   2   3   4   5   6   7
 arr = {43, 34, 34, 21, 16, 29, 17,  8}
 return: 5
 */
int firstOutOfOrder(const int arr[], int size);
/*
 Find the first negative element in an array. Return 0 if no negative is in the array.
 
 ex: given:
 arr = {3, 5, 1, -9, 2, -6, 4};
 return: -9
 */
int getFirstNegative(int arr[], int size);

/*
 Get all the indexes of a wanted element in a given array. List possible test cases.
 
 given:
 0  1  2  3  4  5  6  7  8  9
 arr = {1, 2, 4, 3, 4, 5, 2, 7, 1, 4}
 wanted = 4
 return: {2, 4, 9}
 
 What should the function call look like?
 
 get indexes of all instances of target in arr and store them in result
 since we there could be multiple locations where target appears in arr, we return the values in an array
 
 - Remember an important property of arrays, they are passed by reference, we will take an input array result
 where we store all the indexes of target.
 - We also take a variable numFound to keep track of how many times target was found. We take it in by reference
 so that when we update numfound, the original varaible is also updated.
 */
void getIndexes(int arr[], int size, int result[], int &numFound, int target);

// Implement the computeAverages function
double computeAverages(int arr[], int numberUsed);

// simply prints the array
void printArray(int arr[], int size);

/*******************************
 End Function Declaration
 *******************************/


int main() {
    int arr[8] = {43, 34, 34, 21, 16, 29, 17,  8};
    int size = 8;
    
    cout << firstOutOfOrder(arr, size) << endl;
    cout << computeAverages(arr, 3) << endl;
    
    // setup for getIndexes
    int arr1[10] = {1, 2, 4, 3, 4, 5, 2, 7, 1, 4};
    int result[10] = {};
    int numberInstances = 0;
    getIndexes(arr1, 10, result, numberInstances, 4);
    cout << "number Instances: " <<  numberInstances << endl;
    
    printArray(result, numberInstances);
    
}


/*******************************
 Function Implementations
 *******************************/

// just prints the array
void printArray(int arr[], int size) {
    cout << "-----" << endl;
    for(int i=0; i < size; i++) {
        cout << arr[i] << endl;
    }
    cout << "-----" << endl;
}

void getIndexes(int arr[], int size, int result[], int &numFound, int target) {
    // initialize numfound. Its like our counter
    numFound = 0;
    for (int x=0; x < size; x++) {
        if (arr[x] == target) {
            // store the index of the element into result at numfound
            result[numFound] = x;
            // increment numfound so it will store to the next available space in result
            numFound++;
        }
    }

}


// number used is how many elements we are going to look at
// it can be less than the actaul size of the array
double computeAverages(int arr[], int numberUsed) {
    // if no elements then sum is 0
    if(numberUsed == 0) {
        return 0;
    }
    // declare sum as double, so we dont have to cast it later
    double sum = 0;
    for (int x=0; x < numberUsed; x++) {
        sum += arr[x];
    }
    
    return sum/numberUsed;
}

int getFirstNegative(int arr[], int size) {
    for (int x=0; x < size; x++) {
        if(arr[x] < 0)
            return arr[x];
    }
    return 0;
}

int firstOutOfOrder(const int arr[], int size) {
    // handle empty array and array of size 1
    if (size < 2)
        return -1;
    
    for (int x=1; x < size; x++) {
        // compare value at index to value of index before that
        if(arr[x] > arr[x-1]) {
            return x;
        }
    }
    
    // all values already sorted, so no index to return
    return -1;
}