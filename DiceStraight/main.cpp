#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //{6, 10, 12, 8};
    // {5, 4, 5, 4, 4, 4};
    //{10, 10, 7, 6, 7, 4, 4, 5, 7, 4};

    int ncases;
    cin >> ncases;
    for (int tc=0; tc<ncases; tc++){
    cout<<"Case #"<<tc+1<<": ";

    int n_dice;
    cin >> n_dice;
    int arr[n_dice];

    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i< n_dice; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
//    for (int i = 0; i < n; ++i)
//      {cout << arr[i] << " ";}
//    cout<<endl;
    int straights;
    int val = 1;
    for (int j = 0; j<n_dice; j++){
        if(val<=arr[j]){
         //cout<<val<<" " <<arr[j]<<endl;
           straights = val;
            val++;
        }
        else{
            continue;
        }
    }
    if(straights > n_dice){
     cout<<n_dice<<endl;
    }
    else{
        cout<<straights<<endl;
    }


    }
    return 0;
}
