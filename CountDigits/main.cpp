#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int countDigits(int n){
    //Base case
    if (n == 0){
        return 0;
    }
    int counter =0 ;
    counter = countDigits(n/10);
    counter++;

    return counter;
}
int main()
{
    cout<< countDigits(1001112);
    return 0;
}
