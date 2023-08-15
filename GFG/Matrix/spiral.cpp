#include<iostream>
#include<vector>
using namespace std;

void spiral(vector<vector<int>> arr){
    int top=0;
    int left=0;
    int right=arr[0].size()-1;
    int bottom = arr.size()-1;
    while(top<=bottom && left<=right){
        for(int i =left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if (top<=bottom){
            for (int i=right; i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }}
        bottom--;
        if(left<=right){
            for(int i=bottom;i>top;i--){
                cout<<arr[i][left]<<" ";
            }}
        left++;
    }
    return;
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiral(arr);
    return 0;
}