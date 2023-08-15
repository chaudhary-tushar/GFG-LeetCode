#include<iostream>
#include<vector>
using namespace std;

int maxsubsum(vector<int> &arr){
    int n=arr.size();
    int i=1;
    int maxq=arr[0];
    int res=arr[0];
    while(i<n){
        maxq = max(maxq + arr[i],arr[i]);
        res = max(res,maxq); 
        i++;
    }
    return res;
}

int main(){
    vector<int> arr={2,3,-8,7,-1,2,3};
    // vector<int> arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxsubsum(arr);
    return 0;
}