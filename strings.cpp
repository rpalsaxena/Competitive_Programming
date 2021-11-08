// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1, str2;
    cin>> str1>> str2;
    
    cout<< str1.size()<< " "<< str2.size()<< endl;
    cout<< str1+str2<< endl;
    cout<< str2[0];
    for (int i=1; i< str1.size(); i++){
        cout<<str1[i];
    }
    cout<< " "<<str1[0];
    for (int i=1; i< str2.size(); i++){
        cout<<str2[i];
    }
    return 0;
}   
