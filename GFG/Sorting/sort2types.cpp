#include<iostream>
#include<vector>
using namespace std;

void sort2(vector<int> &arr){
    int n = arr.size();
    int i=0,j=0;
    while(j<n){
        if(arr[j]<=0){
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        j++;
    }
    return;
}

int main(){
    vector<int> arr={4,-5,6,-7,8,-9,2,-3};
    sort2(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}