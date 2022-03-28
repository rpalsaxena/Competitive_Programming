#include <iostream>

using namespace std;

void print(char a[]){
    if (a[0] == '\0') return;

    cout<< a[0];
    print(a+1);
}

void reversePrint(char a[]){
    if (a[0]== '\0') return;

    reversePrint(a+1);
    cout<<a[0];
}
int main()
{
    char input[] = "abcd";
    print(input);

    cout<<endl;
    reversePrint(input);
    return 0;
}
