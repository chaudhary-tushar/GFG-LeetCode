#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int intersect(vector<int> &arr,vector<int> &brr){
    int n = arr.size();
    unordered_set<int> q;
    unordered_set<int> x;
    for(int i=0;i<n;i++){
        q.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        x.insert(brr[i]);
    }
    int count=0;
    for(auto i:q){
        if (x.find(i)!=x.end()){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> zrr={1,2,3,4,5,6,7,8,9};
    vector<int> qrr={1,3,5,7,9,11,13,15};
    cout<<intersect(zrr,qrr);
    return 0;
}

