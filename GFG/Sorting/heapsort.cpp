#include<iostream>
#include<vector>
using namespace std;

void maxheapify(vector<int> &arr,int n,int i){
    // int n= arr.size();
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        maxheapify(arr,n,largest);
    }
}

void buildheap(vector<int> &arr){
    int n=arr.size();
    for(int i=(n-2)/2;i>=0;i--){
        maxheapify(arr,n,i);
    }
}
void heapsort(vector<int> &arr){
    int n=arr.size();
    buildheap(arr);
    for(int i =n-1;i>=1;i--){
        swap(arr[0],arr[i]);
        maxheapify(arr,i,0);
    }

}

int main(){
    vector<int> arr={10,20,30,90,80,70,60,40,50};
    heapsort(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}