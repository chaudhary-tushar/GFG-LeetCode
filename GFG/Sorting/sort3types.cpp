#include<iostream>
#include<vector>
using namespace std;

void sort3(vector<int> &arr){
    int n=arr.size();
    int i=0,j=n-1,k=0;
    while(k<=j){
        if (arr[k]<1){
            swap(arr[k],arr[i]);
            k++;i++;
        }
        else if(arr[k]>1){
            swap(arr[j],arr[k]);
            j--;k++;
        }
        if(arr[k]==1){
            k++;
        }
        else{k--;}
    }
    return;
}

int main(){
    vector<int> arr={0,1,2,0,1,2,0,1,2,0,1,2,0,1,2};
    sort3(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}