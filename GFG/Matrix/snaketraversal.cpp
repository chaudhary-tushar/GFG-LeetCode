#include<iostream>
#include<vector>
using namespace std;

void snake(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();
    int i=0;
    while(i<n){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else if (i%2==1){
            for (int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        i++;
    }
    return ;
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    snake(arr);
    return 0;
}
