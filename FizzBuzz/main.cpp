#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> answer={};

    for(int i=1; i<=n; i++){
        if(i%3==0){

            answer.push_back("fizz");
        }
        else if(i%5==0){
            answer.push_back("buzz");
        }
        else if(i%15==0){
            answer.push_back("fizzbuzz");
        }
        else{
            answer.push_back(to_string(i));
        }

    }
    return answer;
}
int main()
{   int n;
    cin>>n;
    vector<string> ans = fizzBuzz(n);
    for (int i=1; i <=n; i++){
            cout<<ans[i-1]<<"\t";

    }
    return 0;
}
