#include <iostream>

using namespace std;

int countZeros(int n){
    //Base Case
    if (n==0){
        return 0;
    }

    //Recursive function
    int smallOutput = countZeros(n/10);
    if(n%10 == 0www){
        return smallOutput+ 1;
    }
    else
        return smallOutput;
}
int main()
{
    cout << countZeros(100240);
    return 0;
}
