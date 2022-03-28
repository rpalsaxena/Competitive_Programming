#include <iostream>

using namespace std;
int fibonacci(int n){
    //base case
    if (n ==0) return 0;
    if (n ==1) return 1;

    //assumption
    int smalloutput1 = fibonacci(n-1);
    int smalloutput2 = fibonacci(n-2);

    //output
    return smalloutput1+smalloutput2;
}
int main()
{
    int n;
    cin>> n;
    cout<<fibonacci(n);
    return 0;
}
