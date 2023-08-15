// this programme is to remove duplicate elements ina sorted array
#include<iostream>
#include<vector>
using namespace std;

void remduplicate(vector<int> &arr){
    int n=arr.size();
    int i=0;
    while(i<n-1){
        if (arr[i]==arr[i+1]){
            arr.erase(arr.begin()+i+1);
            n--;
        }
        i++;
    }
    return ;
}
int main(){
    vector<int> arr={1,1,2,2,3,3,4,5,6,7,8,9,9};
    remduplicate(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}