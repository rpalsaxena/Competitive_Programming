/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Pair{
public:
    char ch;
    int counter;
    Pair(char c, int n){
        ch = c;
        counter = n;
    }
};
string process(string A, int k){
    stack<Pair> s;

    for (int i=0; i < A.size(); i++){
        if(s.empty() || A[i] != s.top().ch){
            //push a pair
            Pair p(A[i], 1);
            s.push(p);
        }else{
            //A[i] == top element
            s.top().counter++;
            int n = s.top().counter;
            if (n == k){
                s.pop();
            }
        }
    }

    string ans = "";
    while(!s.empty()){
        int count = s.top().counter;
        while(count--){
            ans.push_back(s.top().ch);
        }
        s.pop();
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string txt = "Misssipppi";
    cout<<process(txt,3);
    return 0;
}
*/
