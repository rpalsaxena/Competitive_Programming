#include <iostream>

using namespace std;

bool isExists(int a[], int n, int element){
    if(n==0) return false;

    if(element == a[0]){
        return true;
    }
    else{
        isExists(a+1, n-1, element);
    }
}
int main()
{
    int a[] ={1,2,3,4,5, 6};
    if (isExists(a, 6, 3)){
        cout << "Element Exists" << endl;
    }
    else{
            cout << "Element does not Exists" << endl;
    }
    return 0;
}
