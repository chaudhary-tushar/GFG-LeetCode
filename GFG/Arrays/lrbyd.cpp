#include<iostream>
#include<vector>
using namespace std;

void lrbyD(vector<int> & arr, int d){
    vector<int> brr(arr.begin(),arr.begin()+d);
    int n = arr.size();
    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(int j=0;j<d;j++){
        arr[n-d+j]=brr[j];
    }
    return ;

}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int d;labs;
    cin>>d;
    lrbyD(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}