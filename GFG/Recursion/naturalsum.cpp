#include<iostream>
using namespace std;

int nnsum(int q){
    if ((q-1)==0){
        return q;
    }
    return q+nnsum(q-1);
}
int main(){
    int x;
    cin>>x;
    cout<<nnsum(x);
    return 0;
}

// if not through recursion the following 

// int nsum(int n){
//     if ((n!=0) and ((n-1)!=0)){
//         return (n*(n+1))/2;
//     }
//     return 0;
// }
// int main(){
//     int x;
//     cin>>x;
//     cout<<nsum(x);
//     return 0;
// }