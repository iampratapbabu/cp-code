#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    string s="abc";
    cout<<s<<endl;

    string* sp = new string;
    *sp="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    /*improper way of string input
    string sin;
    cin>>sin;
    cout<<sin<<endl;*/

    //proper way to input a string coz after space cin doesnot care
    string sin;
    getline(cin,sin);
    cout<<sin<<endl;

    return 0;
}

