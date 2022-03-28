#include <iostream>
#include<bits/stdc++.h>
#include <string>


using namespace std;

int main()
{
    string s = "abc";
    cout<<s<<"\n";

    string s2;
    s2 = "def";
    cout<<s2<<"\n";

    string *sp = new string;
    *sp = "mno";
    cout<<sp<<"\n";
    cout<<*sp<<"\n";

    cout<<"============\n";

    vector<string> v;
    v.push_back(s);
    v.push_back(s2);
    v.push_back("hello");

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
        sort(v[i].begin(), v[i].end());
        cout<<v[i]<<endl;
    }
    cout<<"============\n";

    string s3;
    getline(cin, s3);
    cout<<s3<<endl;
    s3 = "sdafnk mavcabcadflamsdf";
    string s4 = s3 + s2;
    s4 += " Hi";
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s4.size()<<endl;
    cout<<s4.length()<<endl;

    cout<<s4.substr(4)<<endl;

    cout<<s4.find("abc")<<endl;

    int a = 123;
    string s6 = to_string(a);
    cout<<s6<<endl;
    s6[1] = '4';
    cout<<s6<<endl;

    a = atoi(s6.c_str());
    cout<<a+10<<endl;
    return 0;
}
