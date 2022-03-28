#include <iostream>

using namespace std;
int sumOfDigits(int n){
    if (n ==0){
        return 0;
    }

    //Recursive function
    int smallOutput = sumOfDigits(n/10);

    return smallOutput+(n%10);
}
int main()
{
    cout << sumOfDigits(4025)<< endl;
    return 0;
}
