#include <iostream>

using namespace std;

int isExists(int a[], int n, int len, int element){
    if(n==0) {
        return -len-1;
    }

    int smallOutput =0;
    if(element != a[0]){
        smallOutput = isExists(a+1, n-1, len, element)+1;
    }
    else{
        return smallOutput+1;
    }
}
int main()
{
    int a[] ={1,2,3,4,5, 6, 7, 8, 9};
    cout<<isExists(a, 3, 3, 8);

    return 0;
}
