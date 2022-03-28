#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "12345 6789";

    /*
    int len = s.size();
    int start = 0;
    int end_s = len-1;
    while( start <= end_s){
        swap(s[start], s[end_s]);
        start++;
        end_s--;
    }
    */

    reverse(s.begin(), s.end());
    cout<< s;

    return 0;
}
