#include <iostream>

using namespace std;
void bubbleSort(int a[], int n){
    //max number of iterations n-1

    for (int i = 0; i <= n-1; i++){
        for (int j = 0; j <= n-2; j++){
            if( a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0; i<n ; i++){
        cin >> a[i];
    }

    bubbleSort(a, n);

    for(int i=0; i<n ; i++){
        cout<< a[i]<< " ";
    }

    return 0;
}
