#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    cout<<"---------program started---------"<<endl;
    vector<int> result;
    vector<vector<int> > dualVec;
    result.push_back(1);
    result.push_back(2);
    result.push_back(3);

    dualVec.push_back(result);

    result.push_back(1);
    result.push_back(2);
    result.push_back(3);

    dualVec.push_back(result);

    for(int i=0;i<=dualVec[0].size();i++){
        for(int j=0;j<=dualVec.size();j++){
            cout<<dualVec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
