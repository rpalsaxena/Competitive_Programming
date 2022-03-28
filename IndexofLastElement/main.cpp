#include <iostream>

using namespace std;

int isExists(int a[], int n, int len, int element){
    if(n==0) {
        return -len-1;
    }

    int smallOutput =0;
    if(element != a[n-1]){
        smallOutput = isExists(a, n-1, len, element)-1;
    }
    else{

        return len-smallOutput;
    }
}
int main()
{
    int a[] ={1,2,3,3,5,6,4,5, 6, 7, 8, 9};
    cout<<isExists(a, 9, 9, 5);

    return 0;
}
