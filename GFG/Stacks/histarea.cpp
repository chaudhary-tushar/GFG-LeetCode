#include<iostream>
#include"../ds.h"
using namespace std;

vector<int> presm(vector<int> &arr){
    Stack<int> st;
    vector<int> q;
    int n=arr.size();
    int i=1;q.push_back(-1);
    st.push(arr[0]);

    while(i<n){
        while(st.isEmpty()==false && arr[i]<arr[st.peek()]){
            st.pop();
        }
        (st.isEmpty()) ? q.push_back(-1) : q.push_back(st.peek());
        st.push(i);
        i++;
    }
    return q;
}

vector<int> nxsm(vector<int> &arr){
    Stack<int> st;
    vector<int> q;
    int n =arr.size();
    int i=n-2;
    q.push_back(-1);
    st.push(n-1);
    while(i>=0){
        while(st.isEmpty()==false && arr[i]<arr[st.peek()]){
            st.pop();
        }
        (st.isEmpty()) ? q.push_back(7) : q.push_back(st.peek());
        st.push(i);
        i--;
    }
    int z=0;
    int y=n-1;
    while(z<y){
        swap(q[z],q[y]);
        z++;
        y--;
    }
    return q;
}

int area(vector<int> &arr){
    vector<int> ps=presm(arr);
    for(auto l:ps){
        cout<<l<<" ";
    }
    cout<<endl;
    vector<int> nx=nxsm(arr);
    for(auto k:nx){
        cout<<k<<" ";
    }
    cout<<endl;
    int n=arr.size();
    int res=0;
    for (int i=0;i<n;i++){
        int curr=arr[i];
        curr+=(i-ps[i]-1)*arr[i];
        curr+=(nx[i]-i-1)*arr[i];
        res=max(res,curr);
    }
    return res;
}

int main(){
    vector<int> qrr {6,2,5,4,1,5,6};
    cout<<area(qrr);
    return 0;
}