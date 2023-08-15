#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void fpair(vector<int> arr,int k){
    unordered_set<int> s1(arr.begin(),arr.end());
    for (auto i:s1){
        if(s1.find(k-i)!=s1.end() and s1.find(k-i)!=s1.find(i)){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    return;
}

int main(){
    vector<int> arr={3,2,8,15,-8};
    int k=8 ;
    fpair(arr,k);
    return 0;
}