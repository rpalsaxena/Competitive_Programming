#include <iostream>

using namespace std;


int main()
{
    string s = "Hello World daklfs  ";
    int len = s.size();
    int count = 0;
    int i=0;
    while(i< len){
        if(s[i] != ' '){
            count++;
            i++;
        }
        else{
            while(s[i] ==' ' && i< len){
                i++;
            }
            if (i == len){
                break;
            }
            else{
                count=0;
            }
        }
    }
    cout<< count;

    return 0;
}
