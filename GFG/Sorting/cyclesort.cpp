#include<iostream>
#include<vector>
using namespace std;

void cyclesort(vector<int> &arr){
    int n =arr.size();
    for(int cs=0;cs<n-1;cs++){
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++){
            if(arr[i]<item){
                pos++;
            }
        }
        swap(item,arr[pos]);
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1;i<n;i++){
                if(arr[i]<item){
                    pos++;
                }
            }
            swap(item,arr[pos]);
        }
    }
}
int main(){
    vector<int> arr={10,90,20,80,30,70,40,60,50};
    cyclesort(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}