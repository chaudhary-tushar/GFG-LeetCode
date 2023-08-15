#include<iostream>
#include<vector>
using namespace std;

void endzero(vector<int> &arr){
    int n= arr.size();
    int j=1;
    int i=0;
    while (i<n and j<n){
        if(arr[i]==0 && arr[j]==0){j++;}
        else if (arr[i]!=0 && arr[j]==0){
          swap(arr[i],arr[j]);  
        }
        else if (arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            j++;i++;
        }
        else{j++;}
    }
    return;
}

int main (){
    vector<int> arr = {1,0,0,0,0,0,0,0,0,1};
    endzero(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}