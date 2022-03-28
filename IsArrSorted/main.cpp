#include <iostream>

using namespace std;

bool isSorted(int a[], int n){
    //Base Case
    if(n==0 || n==1) return true;

    //Recursive
    if(a[0]> a[1]){
        return false;
    }
    bool isSmallArrSorted = isSorted(a+1, n-1);

    return isSmallArrSorted;
}


bool isSorted2(int a[], int n){
     //Base Case
    if(n==0 || n==1) return true;


    //We will first check the smaller array and then compares with the larger one
    bool isSmallArrSorted = isSorted(a+1, n-1)   ;
    if(!isSmallArrSorted ){
        return false;
    }

    if(a[0] > a[1]){
        return false;
    }
    else{
        return true;
    }

}

bool isSorted3(int a[], int n){
     //Base Case
    if(n==0 || n==1) return true;
    if(a[n-2]> a[n-1]){
        return false;
    }
    bool isSmallArrSorted = isSorted(a, n-1);

    return isSmallArrSorted;
}


int main()
{
    int a[]  = {6, 1, 2, 3, 4, 5, 5};
    if(isSorted3(a, 6)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}
