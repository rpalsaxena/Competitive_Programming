#include <iostream>

using namespace std;
void printIndices(int a[], int n, int k, int i=0){
    //Base Case
    if (i==n){
        return;
    }
    //Recursive function
    if (a[i] == k){
        cout<< i<< " ";
    }
    printIndices(a, n, k, i+1);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 2, 4, 5, 6, 0};
    printIndices(a, 10, 4);
    return 0;
}
