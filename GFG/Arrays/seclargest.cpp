#include<iostream>
#include<vector>
using namespace std;

int seclarg(vector<int> arr){
    int lar=INT_MIN;
    int seclar = INT_MIN;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if (lar<arr[i]){
            seclar=lar;
            lar=arr[i];
        }
    }
    return seclar;
}

int main(){
    vector<int> brr={1,2,3,4,5,6,7,8,9,258,963,987,664,789};
    cout<<seclarg(brr);
    return 0;

}