#include <bits/stdc++.h>
using namespace std;

int length(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int smallCalculation = length(str+1);
    return 1+smallCalculation;
}

int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    char str[100];
    cin>>str;
    int result = length(str);
    cout<<result<<endl;

    return 0;
}
