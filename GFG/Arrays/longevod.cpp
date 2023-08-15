#include<iostream>
#include<vector>
using namespace std;

int subar(vector<int> &arr){
    int n=arr.size();
    int res = 0;
    int maxq= 1;
    int i=0;
    while(i<n-1){
        if((arr[i]%2==0 && arr[i+1]%2==1) || (arr[i]%2==1 && arr[i+1]%2==0)){
            maxq++;
            i++;
            res=max(res,maxq);
        }
        else{
            maxq=1;
            i++;
        }
    }
    return res;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout<<subar(arr);
    return 0;
}