#include <iostream>

using namespace std;
void countOccurences(int a[], int n, int k, int i=0, int counter=0){
    //Base Case
    if (i==n){
        cout<<counter;
        return;
    }

    //Recursive function
    if (a[i] == k){
        //cout<<i+1<<" "<<k<<" "<<counter+1<<endl;
        countOccurences(a, n, k, i+1, counter+1);

    }
    else{
        countOccurences(a, n, k, i+1, counter);

    }
}

void counter(int a[], int n, int k, int i, int &ans){
    if (i==n){
        return;
    }
    if (a[i] == k){
        ans++;
    }
    counter(a, n, k, i+1, ans);
}

int counter2(int a[], int n, int k, int i){
    if (i==n){
        return 0;
    }
    if (a[i] == k){
        return 1 + counter2(a, n, k, i+1);
    }
    else{
        return counter2(a, n, k, i+1);
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 2, 4, 5, 6, 0};
    countOccurences(a, 10, 4);

    cout<<endl;

    int ans = 0;
    counter(a, 10, 4, 0, ans);
    cout<<ans<<endl;

    cout<<counter2(a, 10, 4, 0);
    return 0;
}
