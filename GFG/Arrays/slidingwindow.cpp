// given an array 0of n integers and a number k find the maximum sum of k consecutive integers
#include<iostream>
#include<vector>
using namespace std;

int slide(vector<int> &arr,int k){
    int n=arr.size();
    int res=0,maxq=0;
    int i=0;
    while(i<k){
        maxq+=arr[i];
        cout<<arr[i]<<endl;
        i++;
    }
    res=maxq;
    int j=0;
    while(i<n && j<(n-k)){
        maxq=maxq+arr[i]-arr[j];
        res=max(res,maxq);
        i++;j++;
    }
    return res;
}

int main(){
    // vector<int> arr={1,8,30,-5,20,7};
    // int k=3;
    vector<int> arr={5,-10,6,90,3};
    int k=2;
    cout<<slide(arr,k);
    return 0;
}

