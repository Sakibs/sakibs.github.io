#include <iostream>
using namespace std;

void print(int arr[][2], int r, int c);
void print2(int arr[][3], int r, int c);
void addition(int A[][2], int B[][2], int R[][2], int r, int c);

void sumRowCol(int A[][3], int N, int M);

int main() {

	int my2d[4][3] = {{22, 23, 10},
            	  {15, 25, 13},
            	  {20, 74, 67},
            	  {11, 18, 14}};
            	  
    int a[2][2] = {{1,2},
            	  {3,4}};
   	int b[2][2] = {{5, 6},
            	  {7, 8}};
            	  
    int c[2][2];
           
    addition(a, b, c, 2, 2); 	  
    print(c, 2, 2);
    
    sumRowCol(my2d, 3, 3);
    print2(my2d, 3, 3);
	return 0;
}

void sumRowCol(int A[][3], int r, int c) {
	// loop through and sum rows
	for(int i=0; i<r; i++) {
		int total = 0;
		for(int j=0; j<c; j++) {
			total += A[i][j];
		}
		cout << total << endl;
	}
	
	cout << "----------" << endl;
	// loop through and sum columns
	for(int i=0; i<c; i++) {
		int total = 0;
		for(int j=0; j<r; j++) {
			total += A[j][i];
		}
		cout << total << endl;
	}
}

void addition(int A[][2], int B[][2], int R[][2], int r, int c) {
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			R[i][j] = A[i][j] + B[i][j];
		}
	}
		
}

void print(int arr[][2], int r, int c) {
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cout << arr[i][j] <<' ';
		}
		cout << endl;
	}
}

void print2(int arr[][3], int r, int c) {
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cout << arr[i][j] <<' ';
		}
		cout << endl;
	}
}