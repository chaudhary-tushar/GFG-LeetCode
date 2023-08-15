#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool mycmp(pair<int,int> a, pair<int,int> b){
    return (a.first>b.first);
}

vector<pair<int,int>> weight(vector<pair<int,int>> arr){
    vector<pair<int,int>> brr;
    for (int i=0;i<arr.size();i++){
        pair<int,int> t;
        t.first=arr[i].second/arr[i].first;
        t.second=i;
        brr.push_back(t);
    }
    sort(brr.begin(),brr.end(),mycmp);
    return brr;
}

int fractal(vector<pair<int,int>> arr,int k){
    vector<pair<int,int>> brr=weight(arr);
    int res=0;
    while(k>0){
        pair<int,int> tp=brr[0];
        int ar=arr[tp.second].first;
        if(k<ar){
            res=res+(k*tp.first);
            break;
        }
        res=res+arr[tp.second].second;
        brr.erase(brr.begin());
        k=k-ar;
    }
    return res;
}

int main(){
    vector<pair<int,int>> arq {{50,600},{20,500},{30,400}};
    int kap=70;
    cout<<fractal(arq,kap);
    return 0;
}