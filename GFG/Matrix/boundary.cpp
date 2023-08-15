#include<iostream>
#include<vector>
using namespace std;

void bound(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();
    int i=0;
    int j=0;
    for (j ;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    j--;
    for(i=1 ;i<n;i++){
        cout<<arr[i][j]<<" ";
    }
    i--;
    for (j=m-2;j>=0;j--){
        cout<<arr[i][j]<<" ";
    }
    j++;
    for(i=n-2;i>0;i--){
        cout<<arr[i][j]<<" ";
    }
    return ;
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    bound(arr);
    return 0;
}