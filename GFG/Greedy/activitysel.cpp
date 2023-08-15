#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

bool psort(pair<int,int> a,pair<int,int> b){
    return (a.second<b.second);
}
int activity(vector<pair<int,int>> &arr){
    sort(arr.begin(),arr.end(),psort);
    int prev=0;
    int res=1;
    for(int curr=1;curr<arr.size();curr++){
        if(arr[curr].first>=arr[prev].second){
            prev=curr;
            res++;
        }
    }
    return res;
}

int main(){
    vector<pair<int,int>> arr {{12,19},{10,20},{20,30},{7,11}};
    cout<<activity(arr);
    return 0;
}