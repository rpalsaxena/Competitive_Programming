#include <iostream>

using namespace std;

void print(int n){
    //Base Case
    if (n==0) return;

    // Recursive Function
    cout<<n<< " ";

    print(n-1);
}
int main()
{
    print(10);
    return 0;
}
