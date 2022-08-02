#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char str[],char c1,char c2){
    if(str[0]=='\0') return;
    if(str[0]==c1){
        str[0]=c2;
    }
    return replaceCharacter(str+1,c1,c2);
}



int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    char str[100];
    cin>>str;
    char c1 = 'a';
    char c2 = 'X';
    replaceCharacter(str,c1,c2);
    cout<<str;

    return 0;
}

