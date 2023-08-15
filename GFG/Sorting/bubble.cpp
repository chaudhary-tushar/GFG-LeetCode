#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &arr);

void bbsort(vector<int> &arr){
    int n =arr.size();
    int j =n-1;
    
    while(j>=0){
        bool swapped =false;
        for (int i=0;i<n-1;i++){
            if (arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
        display(arr);
        cout<<j<<"*"<<swapped<<endl;
        if(swapped==false){
            break;
        }
        j--;
    }
    return;
}
void display(vector<int> &arr){
    int q=arr.size();
    for(int i =0;i<q;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int> arr = {5,10,10,13,8,9,14,34,7,7,19,99};
    display(arr);
    cout<<endl;
    bbsort(arr);
    display(arr);
    return 0;
}