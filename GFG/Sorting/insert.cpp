#include<iostream>
#include<vector>
using namespace std;

void isort(vector<int> &arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    isort(arr);
    display(arr);
    return 0;
}