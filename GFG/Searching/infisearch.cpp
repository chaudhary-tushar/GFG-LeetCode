#include<iostream>
#include<vector>
using namespace std;

int infsh(vector<int> &arr, int k){
    if(arr[0]==k ){return 0;}
    int i=1;
    int prei=0;
    while(arr[i]<=k){
        if(arr[i]==k){
            return i;
        }
        prei=i;
        i=i*2;
    }    
    prei++;
    while(prei<=i){
        if(prei>i){
            return -1;
        }
        int mid=(prei+i)/2;
        if (arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            prei=mid+1;
        }
        else if(arr[mid]>k){
            i=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10,20,30,40,50,55,60,70,80,90,150,200,250,300,350,400,450,500,600,700};
    int k=55;
    cout<<infsh(arr,k);
    return 0;
}