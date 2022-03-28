#include<bits/stdc++.h>

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

string process(string str, int k){
    stack<Pair> s;
    for (int i=0; i<str.size(); i++){
        if(s.empty() || str[i] != s.top().ch){
            Pair p(str[i], 1);
            s.push(p);
        }
        else{
            s.top().counter++;
            int n = s.top().counter;
            if (n == k){
                //delete the top most element
                s.pop();
            }
        }
    }

    string ans = "";
    while( !s.empty()){
        int n = s.top().counter;
        while(n--){
            ans.push_back(s.top().ch);
        }
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    cout<< ans;
}

int main(){
    string txt = "Misssipppi";
    process(txt, 3);
    return 0;
}
