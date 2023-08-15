#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

void freq(vector<int> &arr){
    int n=arr.size();
    unordered_map<int,int> q;
    for(int i=0;i<n;i++){
        q[arr[i]]++;
    }
    for(auto i:q){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    vector<int> brr = {1,2,3,4,5,4,3,2,1,6,6,8,8,7,9};
    freq(brr);
    return 0;
}