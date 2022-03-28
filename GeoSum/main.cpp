#include <iostream>
#include<math.h>
using namespace std;

double gsum(int k){
    //Base case
    if (k==0) return 1;

    //recursive case
    double smallOutput = gsum(k-1);


    //calculation
    return smallOutput+ 1.0/pow(2, k);

}

int main()
{
    cout << gsum(3);
    return 0;
}
