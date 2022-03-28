#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int evalRPN(vector<string> tokens){
    stack<int> st;
    for (int i=0; i<tokens.size(); i++){
        cout<<tokens[i]<<"\t";
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int v1 = st.top();
                st.pop();

                int v2 = st.top();
                st.pop();

                if (tokens[i] == "+"){
                    st.push(v2+v1);
                }
                else if (tokens[i] == "-"){
                    st.push(v2-v1);
                }
                else if (tokens[i] == "*"){
                    st.push(v2*v1);
                }
                else if (tokens[i] == "/"){
                    st.push(v2/v1);
                }

            }
            else{
                st.push(atoi(tokens[i].c_str()));
            }
        }
        cout<<st.top();

    return st.top();
}
int main()
{
    string arr[] = {"4", "13", "5", "/", "+"};
    vector<string> strings(arr, arr + sizeof(arr)/sizeof(string));
    evalRPN(strings);
    return 0;
}
