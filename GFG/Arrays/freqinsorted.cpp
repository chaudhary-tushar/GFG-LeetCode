#include<iostream>
#include<vector>
using namespace std;

void frequency(vector<int> &arr){
    int freq=1;
    int n= arr.size();
    int i =1;
    while (i<n){
        while(i<n and arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        freq=1;
        i++;
    }
    if (n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" "<<"1"<<endl;
    }
}
int main (){
    vector<int> arr= {5,10,10,10,20,20,30,40,40,40,40,50,50,60};
    frequency(arr);
    return 0;
}