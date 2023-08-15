#include<iostream>
#include<vector>
using namespace std;

int first(vector<int> arr,int l,int h,int k){
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

int main(){
    // vector<int> brr={1,10,10,10,20,20,40};
    // int k= 20;
    vector<int> brr={10,20,30};
    int k= 15;
    int n=brr.size();
    cout<<first(brr,0,n,k);
    return 0;
}