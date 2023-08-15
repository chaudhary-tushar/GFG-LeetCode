#include<iostream>
#include<vector>
using namespace std;

int majority(vector <int> &arr){
    int n=arr.size();
    int res=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{count--;}
        if (count<=0){res=i;count=1;}
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count<n/2){
        return -1;
    }
    return res;
}

int main(){
    vector<int> arr={8,8,6,6,6,4,6};
    cout<<majority(arr);
    return 0;
}