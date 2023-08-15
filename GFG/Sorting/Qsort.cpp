#include<iostream>
#include<vector>
using namespace std;

int lpart(vector<int> &arr,int l, int h){
    int pivot=arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}

int hpart(vector<int> &arr,int l ,int h){
    int pivot=arr[l];
    int i = l-1;
    int j = h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

void lqsort(vector<int> &arr,int l,int h){
    if(l<h){
        int p =lpart(arr,l,h);
        lqsort(arr,l,p-1);
        lqsort(arr,p+1,h);
    }
}
void hqsort(vector<int> &arr,int l,int h){
    if (l<h){
        int p =hpart(arr,l,h);
        hqsort(arr,l,p);
        hqsort(arr,p+1,h);
    }
}

int main(){
    vector<int> arr={5,10,10,13,8,9,14,34,7,7,19,99};
    //lqsort(arr,0,arr.size()-1);
    hqsort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
