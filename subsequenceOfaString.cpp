#include <bits/stdc++.h>
using namespace std;

int subs(string input,string output[]){
    if(input.empty()){
        output[0]="";
        return 1;
    }
    string smallStr = input.substr(1);
    int smallOutputSize = subs(smallStr,output);
    for(int i=0;i<smallOutputSize;i++){
        output[i+smallOutputSize] = input[0]+output[i];
    }
    return 2*smallOutputSize;
}


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    string input;
    cin>>input;
    string* output = new string[1000];
    int count = subs(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }

    return 0;
}

