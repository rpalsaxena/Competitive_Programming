#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*3
300000 200000 300000 500000
300000 200000 500000 300000
300000 500000 300000 200000


Case #1: 300000 200000 300000 200000
*/
int ncases, C[3], M[3], Y[3], K[3];

int main()
{

    cin >> ncases;
    for (int tc=0; tc<ncases; tc++){


    for (int i = 0; i<3; i++){
        cin>> C[i]>>M[i] >>Y[i] >>K[i];
    }
    int minC = min(min(C[0], C[1]), C[2]);
    int minM = min(min(M[0], M[1]), M[2]);
    int minY = min(min(Y[0], Y[1]), Y[2]);
    int minK = min(min(K[0], K[1]), K[2]);

    cout<<"Case #"<<tc<<":";

    if (minC+ minK+ minM+ minY < 1000000){
        cout<<" IMPOSSIBLE"<<endl;
        continue;
    }
    minC= min(minC, 1000000);
    if (minC + minM > 1000000){
        minM = 1000000 - minC;
    }
    if (minC + minM + minY > 1000000){
        minY = 1000000 - minC - minM;
    }
    if (minC + minM + minY+ minK > 1000000){
        minK = 1000000 - minC - minM - minY;
    }
    cout<<minC<<" "<<minM<<" "<<minY<<" "<<minK<<endl;
}
}
