#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string process(string s){
    stack<char> answer;

    for(int i=0; i<= s.size()-1; i++){

        if (answer.empty() || answer.top() != s[i]){
            cout<<answer.top()<<"\t";

            answer.push(s[i]);
        }
        else{
            answer.pop();
        }

    }

        string ans="";
        while(!answer.empty()){
            ans.push_back(answer.top());
            answer.pop();
        }

        reverse(ans.begin(),ans.end());
        cout<<endl<<ans;

        return ans;
}

int main()
{   string txt = "Missi";
    process(txt);
    return 0;
}
