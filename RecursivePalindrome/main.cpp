#include <iostream>

using namespace std;

bool isPalindrome(int a[], int s, int e){
    if(s > e) return true;

    if(a[s] == a[e]){
        return isPalindrome(a, s+1, e-1);
    }
    else{
            return false;
    }
}
int main()
{
    int a[] = {1, 2, 3, 5, 4, 3, 2, 1 };
    cout << isPalindrome(a, 0, 8);
    return 0;
}
