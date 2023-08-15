#include<iostream>
#include<vector>
using namespace std;

void countingsort(vector<int> &arr){
    int n=arr.size();
    int k=arr[0];
    for(auto i:arr){
        if (i>k){k=i;}
    }
    vector<int> brr(k+1,0);
    for(int i=0;i<n;i++){
        brr[arr[i]]++;
    }
    for(auto i:brr){
        cout<<i<<" ";
    }
    int l=0;
    for(int j=0;j<brr.size();j++){
        if(brr[j]!=0){
            while(brr[j]>0){
                arr[l]=j;
                l++;
                brr[j]--;
            }
        }
    }
    
    
}

int main(){
    vector<int> arr={9,8,1,9,8,2,9,8,3,9,8,4,9,8,6,9,8,5,9,8,7};
    countingsort(arr);
    cout<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}