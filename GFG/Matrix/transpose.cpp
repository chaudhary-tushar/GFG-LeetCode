#include<iostream>
#include<vector>
using namespace std;

void trans(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();

    vector<vector<int>> brr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    trans(arr);
    return 0;

}