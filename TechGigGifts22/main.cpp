#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
2
3
8
50 70 30 100 80 20 150 10
4
6
10 20 32 412 500 11
*/
int ncases, req_gifts, avail_gifts;
int main()
{

    int a[avail_gifts];
    cin >> ncases;

    for(int i=0; i<ncases; i++){
        cin>>req_gifts>> avail_gifts;
        for (int i=0; i< avail_gifts; i++){
            cin>> a[i];
        }

        sort(a, a+avail_gifts);
        int money_req=0;
        for(int i=0; i<req_gifts; i++){
            money_req += a[i];
        }

        cout<<money_req<<endl;
    }

    return 0;
}
