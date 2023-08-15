#include<iostream>
#include<vector>
using namespace std;

int maxone(vector<int> &arr){
    int n = arr.size();
    int i=0,j=0;
    int maxq=0;
    while(i<n && j<n){
        if (arr[i]==0){i++;j++;}
        else if(arr[j]==1){j++;}
        else if (arr[j]==0){
            maxq=max(maxq,j-i);
            i=j;
        }
    }
    return maxq;
}
int main (){
    //vector<int> arr = {0,0,0,0,0,1,0,0,0,0,0,0};
    vector<int> arr = {1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1};
    cout<<maxone(arr);
    return 0;
}