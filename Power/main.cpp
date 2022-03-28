#include <iostream>

using namespace std;
int power(int x, int n){
    //Base Case
    if (n == 0){
        return 1;
    }

    //Recursive Function
    int smallOutput = power(x, n-1);

    //Result
    return x*smallOutput;

}
int main()
{
    cout<<power(10,4);
    return 0;
}
