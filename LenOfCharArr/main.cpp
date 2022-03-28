#include <iostream>

using namespace std;
int lengthOfArr(char a[], int &len){
    if(a[0] =='\0') return len;
    len++;
    lengthOfArr(a+1, len);
    return len;
}

int length(char a[]){
    if(a[0] =='\0') return 0;

    int smallOutput = length(a+1);
    return 1+smallOutput;
}
int main()
{
    char a[] = "abcd";
    int len = 0;
    cout<<lengthOfArr(a, len)<<endl;

    cout<<length(a);

    return 0;
}
