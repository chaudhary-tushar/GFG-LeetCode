#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int unionp(vector<int> &arr,vector<int> &brr){
    int n = arr.size();
    int m=brr.size();
    unordered_set<int> q;
    for(int i=0;i<n;i++){
        q.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        q.insert(brr[i]);
    }
    // for(auto i:q){
    //     cout<<i<<" ";
    // }
    return q.size();
}
int main(){
    vector<int> zrr={1,2,3,4,5,6,7,8,9};
    vector<int> qrr={1,3,5,7,9,11,13,15};
    cout<<endl<<unionp(zrr,qrr);
    return 0;
}

