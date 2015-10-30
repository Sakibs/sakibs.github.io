#include <iostream>
#include <string>

using namespace std;

void count_chars_in_str(string s);

int main() {
    string s1 = "The cat in the hat";
    string s2 = "the cat in the hat";
    string s3 = "green eggs and ham";
    
//    count_chars_in_str(s1);
//    cout << "-----" << endl;
    count_chars_in_str(s2);
    cout << "-----" << endl;
//    count_chars_in_str(s3);
//    cout << "-----" << endl;
}

void count_chars_in_str(string s) {
    for (int i=0; i < s.length(); i++) {
        bool seen_previously = false;
        
        // check the previous characters to make sure we never saw
        // this character before
        for(int j=i-1; j >= 0; j--) {
            if(s[i] == s[j]) {
                seen_previously = true;
            }
        }
        
        // if character was not seen previously, count its occurances
        if(!seen_previously) {
            int count = 1;
            
            for(int k=0; k<s.length(); k++) {
                if(s[i] == s[k]) {
                    count++;
                }
            }
            
            // print the counts for the character
            cout << s[i] << ": " << count << endl;
        }
    }
}