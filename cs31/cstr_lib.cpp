#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

int my_str_len(char s[]) {
    // just keep adding to len as long as we dont see zero byte
    int len = 0;
    while(s[len] != '\0') {
        len++;
    }
    return len;
}

bool my_str_compare(char s1[], char s2[]) {
    int ix = 0;
    
    // start at zero keep comparing each characters until one of the string ends
    while (1) {
        if(s1[ix] == '\0' || s2[ix] == '\0')
            break;
        
        // if two characters are not the same end
        else if(s1[ix] != s2[ix])
            return false;
        
        ix++;
    }
    
    // compare the last characters of the string.
    // if one ended earlier than the other the current characters will not be the same
    if(s1[ix] != s2[ix])
        return false;
    
    return true;
}

void my_str_copy(char src[], char dst[]) {
    int i=0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    // end dest with zero byte
    dst[i] = '\0';
}

void my_str_n_copy(char src[], char dst[], int n) {
    int i=0;
    while (i != n) {
        dst[i] = src[i];
        i++;
    }
    // end dest with zero byte
    dst[i] = '\0';
}

int my_str_char_last(char s[], char c) {
    int i = my_str_len(s) - 1;
    while (i >= 0) {
        if(s[i] == c)
            return i;
        i--;
    }
    return -1;
}


int main()
{
    char s[100] = "ITS ALIVE!!";
    
    assert(my_str_len(s) == strlen(s));
    
    char a[100] = "abcdefg";
    char b[100] = "abcdefg";
    char c[100] = "abcd";
    
    assert(my_str_compare(a, b));
    assert(!(my_str_compare(a, c)));
    
    my_str_copy(c, a);
    
    assert(my_str_compare(a, c));
    
    char d[100] = "ab";
    my_str_n_copy(c, b, 2);
    assert(my_str_compare(b, d));
    
    
    char search[100] = "This is crazzyy";
    assert(my_str_char_last(search, 's') == 6);
    assert(my_str_char_last(search, 'x') == -1);
}