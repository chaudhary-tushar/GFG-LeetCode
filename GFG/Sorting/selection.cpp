#include<iostream>
#include<vector>
using namespace std;

void slsort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
    return;
}



void display(vector<int> &arr){
    int q=arr.size();
    for(int i =0;i<q;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    vector<int> arr = {5,10,10,13,8,9,14,34,7,7,19,99};
    display(arr);
    cout<<endl;
    slsort(arr);
    display(arr);
    return 0;
}