#include <iostream>

using namespace std;
int multiply(int m, int n){
    //Base case
    if (n == 0){
        return 0;
    }

    //Recursive function
    int smallOutput = multiply(m, n-1);

    return smallOutput+ m;
}
int main()
{

    cout<<multiply(10, 5);
    return 0;
}
