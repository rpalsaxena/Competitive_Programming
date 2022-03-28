#include <iostream>

using namespace std;

int f[100], expo[100], len;

int prime_fact(int n){
    if (n =1 ){
        f[len] = 2;
        expo[len] =0;
        len++;
        return 0;

    }
    int d = 2;
    while(n> 1 && 1LL* d*d <= n){
       int k =0;
       while(n%d == 0){
            k++;
            n /= d;
       }
       if (k>0){
        f[len]=d;
        expo[len]=k;
        len++;
        }
        d++;
    }
    if (n>1){
        f[len] = n;
        expo[len] = 1;
        len++;
    }
    return 0;
}

int main()
{
    prime_fact(0);
    for (int i =0; i< len; i++){
        cout<< f[i] << " " << expo[i] << "\n";
    }
    return 0;

}
