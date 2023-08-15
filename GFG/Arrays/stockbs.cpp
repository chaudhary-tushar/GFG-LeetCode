#include<iostream>
#include<vector>
using namespace std;

int stocks(vector<int> &arr){
    int pro=0;
     int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            pro=pro+(arr[i]-arr[i-1]);
        }
    }
    return pro;
}
int main(){
    vector<int> arr={1,5,3,8,12};
    cout<<stocks(arr);
    return 0;
}