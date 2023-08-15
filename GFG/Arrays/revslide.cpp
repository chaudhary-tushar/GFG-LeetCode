/*
    Given an unsorted array of non-negative integers, 
    find if there is a subarray with given sum? 
*/
#include<iostream>
#include<vector>
using namespace std;

string givsum(vector<int> &arr,int gsum){
    int n=arr.size();
    int fsum=arr[0];
    int i=1,j=0;
    while(i<n and j<i){
        if(fsum<gsum){
            fsum+=arr[i];
            i++;
        }
    else if(fsum>gsum){
        fsum-=arr[j];
        j++;
    }
    else{
        return "YES";
    }
    }
    return "NO";
}

int main(){
    vector<int> arr={1,4,20,3,10,5};
    int qsum=33;
    cout<<givsum(arr,qsum);
    return 0;
}
