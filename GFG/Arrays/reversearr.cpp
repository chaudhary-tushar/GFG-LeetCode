#include<iostream>
#include<vector>
using namespace std;

void rev(vector<int> &arr){
    int n=arr.size();
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
    return;

}
int main (){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    rev(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}