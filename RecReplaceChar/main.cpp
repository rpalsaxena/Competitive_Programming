#include <iostream>

using namespace std;

void replaceChar(char a[]){
    if(a[0] =='\0') return;

    if(a[0] == 'a'){ cout<<'x';}
    else {cout<<a[0];}
    replaceChar(a+1);
}

void replaceChar2(char a[]){
    if(a[0] =='\0') return;

    if(a[0] == 'a'){ a[0] = 'x';}
    replaceChar2(a+1);
}


int main()
{
    char input[] = "Hello I am trying to learn comp programming";


    replaceChar(input);

    replaceChar2(input);
    cout<<endl<<input;
    return 0;
}
