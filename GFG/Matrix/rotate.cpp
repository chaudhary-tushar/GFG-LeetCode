#include<iostream>
#include<vector>
using namespace std;

void rot(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();

    vector<vector<int>> brr(n,vector<int>(m));
    vector<vector<int>> mrr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mrr[j][i]=arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[n-i-1][j]=mrr[i][j];
        }
    }

    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rot(arr);
    return 0;
}