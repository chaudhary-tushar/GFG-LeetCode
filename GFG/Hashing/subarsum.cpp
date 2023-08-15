#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void sasum(vector<int> arr,int sm){
    vector<int> pre;
    pre.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        pre.push_back(pre[i-1]+arr[i]);
    }
    unordered_set<int> s;
    for(int i=0;i<pre.size();i++){
        if (s.find(pre[i]-sm)!=s.end()){
            cout<<"YES";
            return;
        }
        else{
            s.insert(pre[i]);
        }
    }
    cout<<"NO";
    return;
}
int main(){
    vector<int> arr = {5,8,6,13,3,-1};
    int l=22;
    sasum(arr,l);
    return 0;
}