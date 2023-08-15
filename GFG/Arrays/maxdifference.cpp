#include<iostream>
#include<vector>
using namespace std;

int maxdiff(vector<int> &arr){
    int res=arr[1]-arr[0];
    int minv=arr[0];
    for(int i = 1;i<arr.size();i++){
        res=max(res,arr[i]-minv);
        minv = min(minv,arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr = {7,9,5,6,3,2};
    cout<<maxdiff(arr);
    return 0;
}