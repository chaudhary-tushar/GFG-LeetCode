#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int larg(vector<int> arr){
    int max = INT_MIN;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    vector<int> brr = {1,2,3,4,5,6,7,8,9,258,963,987,664,789};
    cout<<larg(brr);
    return 0;
}