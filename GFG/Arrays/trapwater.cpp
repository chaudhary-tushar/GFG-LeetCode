#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int> &arr){
    int n=arr.size();
    vector<int> lmax(n);
    vector<int> rmax(n);
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    int i = 0,j=n-1;
    int wat=0;
    while(i<n && j>=0){
        lmax[i]=max(lmax[i-1],arr[i]);
        rmax[j]=max(rmax[j+1],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        wat = wat+((min(lmax[i],rmax[i]))-arr[i]);
    }
    // for(int i=0;i<arr.size();i++){
    //     cout<<lmax[i]<<" "<<rmax[i]<<endl;
    // }
    return wat;
}

int main(){
    vector<int> arr={9,5,4,3,2,10,2,3,4,5,7};
    cout<<trap(arr);
    return 0;
}