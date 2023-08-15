#include<iostream>
#include<vector>
using namespace std;

int binroot(int n){
    int i=1,h=n,ans=-1;
    while(i<=h){
        int mid =(i+h)/2;
        int msq=mid*mid;
        if(msq==n){
            return mid;
        }
        else if(msq>n){
            h=mid-1;
        }
        else{
            i=mid+1;
            ans=mid;
        }
    }
    return ans;

}
int main(){
    cout<<binroot(169);
    return 0;
}