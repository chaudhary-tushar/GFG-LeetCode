#include<iostream>
#include<vector>
using namespace std;

void leader(vector<int> arr){
    int n= arr.size();
    int j=n-1;
    int max=INT_MIN;
    while(j>=0){
        if(max<arr[j]){
            max=arr[j];
            cout<<max<<" ";
            j--;
        }
        else{j--;}
    }

    return ;
}

int main (){
    vector<int> brr={7,10,4,3,6,5,2};
    leader(brr);
    return 0;
}
