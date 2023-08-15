#include<iostream>
#include<vector>
using namespace std;

void peak(vector<int> &arr){
    int n=arr.size();
    if(arr[0]>arr[1]){
        cout<<arr[0]<<" ";
    }
    if(arr[n-1]>arr[n-2]){
        cout<<arr[n-2]<<" ";
    }
    int i=1;
    while(i<n-1){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        cout<<arr[i]<<" ";
        i=i+2;
        }
        else{
            i++;
        }
    }
    return;
}

int main(){
    vector<int> arr={10,20,15,5,23,90,67};
    peak(arr);
    return 0;
}
