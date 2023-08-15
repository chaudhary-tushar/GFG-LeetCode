#include<iostream>
#include<string>
using namespace std;

void reverse(string &str,int i,int j){
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return;
}
void revds(string &str){
    int n=str.size();
    int i=0;
    int j=0;
    while(j<=n){
        if(str[j]==' ' || j==n){
            reverse(str,i,j-1);
            i=j+1;
            j++;
        }
        j++;
    }
    reverse(str,0,n-1);
    return;
}

int  main(){
    string qwe;
    getline(cin,qwe);
    revds(qwe);
    cout<<qwe;
    return 0;
}