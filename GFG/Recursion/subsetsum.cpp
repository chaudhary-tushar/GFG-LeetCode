#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int subsum(vector<int> arr,int gsum, vector<int> curr={},int i=0){
    if (accumulate(curr.begin(),curr.end(),0)==gsum){
        return 1;
    }
    else if (i>=arr.size()){
        return 0 ;
    }
    vector<int> currCopy = curr; // Make a copy of the current vector
    currCopy.push_back(arr[i]);
    return (subsum(arr,gsum,curr,i+1)+subsum(arr,gsum,currCopy,i+1));
}

int main(){
    vector <int> brr = {10,5,2,3,6};
    int qsum = 8;
    cout<<subsum(brr,qsum);
    return 0;
}