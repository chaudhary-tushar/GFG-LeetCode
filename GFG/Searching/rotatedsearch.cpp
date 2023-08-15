#include<iostream>
#include<vector>
using namespace std;

int Rsearch(vector<int> &arr, int k){
    int n =arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[low]<arr[mid]){
            if(arr[low]<=k && arr[mid]>k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]>k && arr[high]>=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> brr= {10,20,40,60,5,8,9};
    int k=5;
    cout<<Rsearch(brr,k);
    return 0;
}