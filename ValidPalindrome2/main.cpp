#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkPal(string s, int start, int last){
    while(start <= last){
        if(s[start] != s[last]){
            return false;
        }
        start++; last--;
    }
    return true;
}

bool isValPalindrome(string s){
    int start = 0, last = s.size()-1;

    while(start <= last){
        if(s[start] != s[last]){

            //check s[s+1,  l] or check[s, l-1] for palindrome
            if (checkPal(s, start+1, last) || checkPal(s, start, last-1)){
                return true;
            }
            else{
                return false;
            }
        }
        start++;
        last--;
    }
    return true;
}

int main()
{
    string s ="lcupuuuupuckul";
    cout<<isValPalindrome(s);
    return 0;
}
