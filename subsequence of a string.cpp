#include <bits/stdc++.h>
using namespace std;

void printSubs(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    printSubs(input.substr(1),output);
    printSubs(input.substr(1),output+input[0]);
}


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    string input;
    cin>>input;
    string output = "";
    printSubs(input,output);


    return 0;
}

