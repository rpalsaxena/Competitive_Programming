#include <iostream>

using namespace std;
int sumOfArray(int a[], int n){
    //Base Case
    if (n==0) return 0;

    //Intermediate + Recursive func
    int isum = a[0] + sumOfArray(a+1, n-1);

    return isum;

}

int sumOfArray2(int a[], int n){
    if (n==0) return 0;

    int isum = a[n-1] + sumOfArray2(a, n-1);
    return isum;
}

int sumOfArray3(int a[], int n, int i){
    if (n==i) return 0;

    int isum = a[i] + sumOfArray3   (a, n, i+1);

}
int main()
{
    int a[] ={1,2,3,4,5, 6};
    cout << sumOfArray2(a, 6);
    return 0;
}
