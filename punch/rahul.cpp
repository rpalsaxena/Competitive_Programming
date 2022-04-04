
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printCards(int m, int n){

    int k=n;
    while(k>0){
        if(k==n){
            cout<<"..";
        }
        else cout<<"+-";

        k--;
    }
    cout<<"+"<<endl;;

    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==0&&j==0){
                cout<< "..";
            }
            else cout<<"|.";
        }
        cout<<"|"<<endl;
        k = n;
        while(k>0){
            cout<<"+-";
            k--;
        }
        cout<<"+";

        cout<<endl;
    }

    }
/*int main()
{
    int ncases;
    cin >> ncases;
    int rows[ncases];
    int cols[ncases];
    for (int i=0; i<ncases; i++){
        cin>> rows[i];
        cin >> cols[i];

        if (rows[i] <2 || cols[i] <2 || rows[i] > 10 || cols[i] >10){
            continue;
        }
        cout<<"Case #"<<i+1<<":"<<endl;
        printCards(rows[i], cols[i]);

    }
    //for (int i=0; i<ncases; i++){
    //}
    return 0;
}
*/
