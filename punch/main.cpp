#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tc, rows, cols;
int main(){
    cin>>tc;
    for(int t=1; t<=tc; t++){

        cin>> rows;
        cin>>cols;
        cout<<"Case #"<<t<<":"<<endl;

        for(int i= 0; i<rows*2+1;i++){
            for(int j=0; j< cols*2+1; j++){
                if (i==0 && j==0) cout<<".";
                else if (i+j ==1) cout<<".";
                else if (i%2==0 && j%2==0) cout<<"+";
                else if (i%2==0 && j%2==1) cout<<"-";
                else if (i%2==1 && j%2==0) cout<<"|";
                else cout<<".";
            }
            cout<<endl;
        }

    }


return 0;
}
