#include <iostream>

using namespace std;

const int Nmax = 100001;
bool isPrime[Nmax];

void seiveOfEratosthenes(int n){

    for(int i=2; i< n; i++){
        isPrime[i] = true;
    }
    for (int i =2; i <= n/2; i++){
        if(isPrime[i] == true){
            for(int j = i*2; j<=n; j+= i){
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    int n = 1;
    if (n > 1)
    {
        seiveOfEratosthenes(n);
        for (int i=2; i<=n; i++){
            if(isPrime[i] == true){
                cout<< i<<"\t";
            }
        }
    }
    else{
        cout<<"No prime number exists";
    }
    return 0;
}
