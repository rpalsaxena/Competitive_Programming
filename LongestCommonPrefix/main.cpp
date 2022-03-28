#include<bits/stdc++.h>

using namespace std;

string longestCommongPrefix(vector<string>& strs){
    string matched_str = "";
    //get smallest string
    string s = *min_element(strs.begin(), strs.end());

    for(int i =0 ; i< s.size(); i++){
        for (int j=0; j< strs.size(); j++){
            if (s[i] != strs[j][i]){
                return matched_str;
            }
        }
        matched_str.push_back(s[i]);
    }
    return matched_str;
}
int main()
{
 //   vector<string>& strings = [];
    string arr[] = {"geeks", "geegood", "geeekio"};
    vector<string> strings(arr, arr + sizeof(arr)/sizeof(string));
    cout<<longestCommongPrefix(strings);

    return 0;
}
