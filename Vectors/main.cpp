#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   //dynamic allocation
    vector<int> *vp = new vector<int>{};

    //static allocation
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;

    v[4]=1000;
    cout<<v[4];
    return 0;
}
