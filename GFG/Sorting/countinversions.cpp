#include<iostream>
#include<vector>
using namespace std;

int cntnmerge(vector<int> &arr,int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    vector<int> left(n1),right(n2);
    for(int i=0;i<n1;i++){
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[m+i+1];
    }
    int i=0;
    int j=0;
    int k=l;
    int res=0;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
            res=res+n1-i;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        k++;
        j++;
    }
    return res;
}

int cntinv(vector<int> &arr,int l,int r){
    int res=0;
    if(r>l){
        
        int m=l+(r-l)/2;
        res+=cntinv(arr,l,m);
        res+=cntinv(arr,m+1,r);
        res+=cntnmerge(arr,l,m,r);
    }
    return res;
}
int main(){
    vector<int> arr = {5,10,10,13,8,9,14,34,7,7,19,99};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    int result=cntinv(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
    cout<<result;

}