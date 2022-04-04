#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    int counter = 0;
    for(int i=0; i<str.size(); i++){
        if (str[i]==str[i+1]){
            continue;
        }
        else{
           counter++;
        }
    }
    if(counter%2){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
