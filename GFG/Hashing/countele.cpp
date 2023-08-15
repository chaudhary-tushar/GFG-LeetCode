#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int count(vector<int> &arr){
    int n=arr.size();
    unordered_set <int> q;
    for(int i=0;i<n;i++){
        q.insert(arr[i]);
    }
    return q.size();
}

int main(){
    vector<int> brr = {1,2,3,4,5,4,3,2,1,6,6,8,8,7,9};
    cout<<count(brr);
    return 0;
}

