#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isValPalindrome(string s){
    int start = 0, ends=s.size()-1;

    while(start <= ends){
        while(!isalnum(s[start])) start++;
        while(!isalnum(s[ends])) ends--;

        if( tolower(s[start]) != tolower(s[ends])){
            return false;
        }
        start++;
        ends--;
    }
    return true;
}
int main()
{
    string txt = "H&^^%$#   i...........iH";
    cout<<isValPalindrome(txt);
    return 0;
}
