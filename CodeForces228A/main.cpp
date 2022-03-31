#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int newHorseShoes(int a[4]){
    sort(a, a + 4);
    int counter = 0;
    for (int i =0; i<4; i++){
        while (i < 3 && a[i] == a[i+1]) {
                i++;  counter++;
        }
    }
    return counter;
    //cout<< 4-counter;
}
int main()
{
    int matrix[4];
    for (int i = 0; i < 4; i++){
            cin >> matrix[i];
        }
    cout<<newHorseShoes(matrix);

    return 0;
}
