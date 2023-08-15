#include<iostream>
#include<vector>
using namespace std;

bool checksort(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> brr={1,2,3,4,5,5,6,6,6,7,8,8,9,11};
    cout<<checksort(brr);
    return 0;
}