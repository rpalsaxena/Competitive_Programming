#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void saveIndicesUsingVector(int a[], int n, int k, int i, vector<int> &ans){
    //Base Case
    if (i==n){
        return;
    }
    //Recursive function
    if (a[i] == k){
        ans.push_back(i);
    }
    saveIndicesUsingVector(a, n, k, i+1, ans);
}

int saveIndicesUsingArr(int a[], int n, int k, int i, int out[], int j){
    if(i==n) return 0;

    if(a[i] == k){
        out[j] = i;
        return 1+saveIndicesUsingArr(a, n, k, i+1, out, j+1);
    }
    return 0+saveIndicesUsingArr(a, n, k, i+1, out, j);
}


int main()
{
    int a[] = {1, 2, 3, 4, 5, 2, 4, 5, 6, 0};
    vector<int> indices;
    saveIndicesUsingVector(a, 10, 4, 0, indices);

    for (int i = 0; i <indices.size(); i++){
        cout<<indices[i]<<"\t"<<endl;
    }

    int output[10];
    int count = saveIndicesUsingArr(a, 10, 4, 0, output, 0);
    for (int i=0; i<count; i++){
        cout<< output[i]<< " ";
    }
    return 0;
}
