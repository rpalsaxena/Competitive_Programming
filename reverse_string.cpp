#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Reverse a string

int main(){
	// int tests;
	// cin>> tests;
	// cin.ignore();
	

	string str1, rev_string;
	getline(cin, str1);

	for (int i = str1.size()-1; i>=0; --i)	{
		rev_string.push_back(str1[i]);
	}
	cout<<rev_string<<"\n";

	// Check Palindrome
	if (rev_string == str1){
		cout<<"Palindrome String";
	}
	else
	{
		cout<<"Not a Palindrome String";	
	}

}
