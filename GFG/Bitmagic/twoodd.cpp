//  to find two odd appearing integers in a vector
#include<iostream>
#include<vector>
using namespace std;

int twoodd(vector<int> arr){
    int n = arr.size();
    int xoq = 0, res = 0, res2=0;
    for(int i=0;i<n;i++){xoq=xoq^arr[i];}
    int sn = xoq & ~(xoq-1);
    for (int i =0;i<n;i++){
        if ((arr[i]&sn)!=0){
            res = res^arr[i];
        }
        else{
            res2 = res2^(arr[i]);
        }
        
    }cout<<res<<" "<<res2;
    return res,res2;
}

int main (){
    vector<int> brr = {1,2,3,4,5,6,7,8,9,7,4,1,2,5,8,3,6,11};
    cout<<endl;
    twoodd(brr);
    return 0;
}