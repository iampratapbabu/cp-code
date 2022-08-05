// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swapAdjacentElements(int arr[],int len){
    //int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"length of arr is:"<<len<<endl;
    for(int i=0;i<len-1;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    int lengthOfArr;
    cin>>lengthOfArr;
    int intArr[lengthOfArr];
    for(int i=0;i<lengthOfArr;i++){
        cin>>intArr[i];
    }
    swapAdjacentElements(intArr,lengthOfArr);
    return 0;
}
