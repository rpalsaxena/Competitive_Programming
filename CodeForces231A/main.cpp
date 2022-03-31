//Problem Statement: https://codeforces.com/problemset/problem/231/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solvableProblems(int problems[][3], int n){
    int solved_problems = 0;
    for(int i= 0; i< n; i++){
            int counter = 0;
            for(int f =0; f < 3; f++)
               {
                if(problems[i][f]){
                    counter++;
                }
               }
            if (counter >= 2) {
                    //cout<<counter << "\t"<< i;
                    solved_problems++;
                }
    }
    return solved_problems;
}

int main()
{
    int problems;
    cin>> problems;
    int matrix[problems][3];
    for (int i = 0; i < problems; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }


    int friends = 3;

    cout<<solvableProblems(matrix, problems);
    return 0;
}
