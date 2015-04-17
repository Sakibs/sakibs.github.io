#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
/*
* Write a program that queries the user for a string,
* swaps all lowercase letters for uppercase ones (and
* vice versa), and then prints out the result.
*/
int main() {
	string s;
	char c;
 
	// Ask for a string
	cout << "Gimme dat string: ";
	// [!] Collect user's input
	getline(cin, s);
 
	// [!] Iterate through each string character
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i]))
			c = tolower(s[i]);
		else
			c = toupper(s[i]);
 
		// Print out current value of c
		cout << c;
	}
	cout << endl;
}