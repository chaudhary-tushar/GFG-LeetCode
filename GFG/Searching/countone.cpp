#include<iostream>
#include<vector>
using namespace std;

int first(vector<int> arr,int l,int h,int k=1){
    if (l > h) {
        return -1;
    }
    int m = (l+h)/2;
    if(arr[m]==k && (arr[m-1]!=k)){
        return m;
    }
    else if(arr[m]==k && arr[m-1]==k){
        return first(arr,l,m-1,k);
    }
    else if(arr[m]>k){
        return first(arr,l,m-1,k);
    }
    else if(arr[m]<k ) {
        return first(arr,m+1,h,k);
    }
    return -1;
}

int cntone(vector<int> arr){
    int n=arr.size();
    int f=first(arr,0,n);
    return n-f;
}

int main(){
    vector<int> arr={0,0,0,0,1,1,1,1,1,1};
    cout<<cntone(arr);
}