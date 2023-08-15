#include<iostream>
#include<vector>
using namespace std;
int last(vector<int> arr,int l,int h,int k){
    if (l > h) {
        return -1;
    }
    int m = (l+h)/2;
    if(arr[m]==k && (arr[m+1]!=k)){
        return m;
    }
    else if(arr[m]==k && arr[m+1]==k){
        return last(arr,m+1,h,k);
    }
    else if(arr[m]>k){
        return last(arr,l,m-1,k);
    }
    else if(arr[m]<k ) {
        return last(arr,m+1,h,k);
    }
    return -1;
}
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

int count(vector<int> arr,int k){
    int n=arr.size();
    int l=last(arr,0,n,k);
    int f= first(arr,0,n,k);
    cout<<l<<" "<<f;
    return (l-f)+1;
}

int main(){
    vector<int> brr={1,10,10,10,20,20,20,20,20,30,30};
    int c=20;
    cout<<count(brr,c);
    return 0;
}