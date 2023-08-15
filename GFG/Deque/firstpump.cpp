#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int firstind(vector<int> &arr,vector<int> &brr){
    int n=arr.size();
    int start=0,curr_pet=0,prev_pet=0;
    for(int i=0;i<n;i++){
        curr_pet+=(arr[i]-brr[i]);
        cout<<curr_pet<<" ";
        if(curr_pet<0){
            start=i+1;
            prev_pet=curr_pet;
            curr_pet=0;
        }
    }

    return ((curr_pet+prev_pet)>=0) ? (start+1) : -1;
}

int main(){
    vector<int> q {4,8,7,4};
    vector<int> w {6,5,3,5};
    cout<<firstind(q,w)<<endl;
    return 0;
}