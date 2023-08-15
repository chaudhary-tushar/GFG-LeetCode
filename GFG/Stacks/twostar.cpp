#include<iostream>
#include<vector>
using namespace std;

class mstack{
    public:
    vector<int> arr=vector<int>(50,0);
    int sz1=0;
    int sz2=0;
    int top1=0;
    int top2=50-1;

    void push1(int data){
        arr[top1]=data;
        top1++;
        sz1++;
    }
    void push2(int data){
        arr[top2]=data;
        top2--;
        sz2++;
    }
    int pop1(){
        int res=arr[top1-1];
        arr[top1-1]=0;
        top1--;
        sz1--;
        return res;
    }
    int pop2(){
        int res=arr[top2+1];
        arr[top2]=0;
        top2++;
        sz2--;
        return res;
    }
    int peek1(){
        return arr[top1];
    }
    int peek2(){
        return arr[top2];
    }
    int size1(){
        return sz1;
    }
    int size2(){
        return sz2;
    }
    bool isEmpty1(){
        return sz1==0;
    }
    bool isEmpty2(){
        return sz2==0;
    }

};

int main(){
    mstack ts;
    int i =1;
    while(i<26){
        if(i%2==0){
            ts.push1(i);
        }
        else{
            ts.push2(i);
        }
        i++;
    }
    for (int j=0;j<50;j++){
        cout<<ts.arr[j]<<" ";
    }
    cout<<endl;
    while(ts.isEmpty1()==false){
        cout<<ts.pop1()<<" * ";
    }
    cout<<endl;
    while(ts.isEmpty2()==false){
        cout<<ts.pop2()<<" * ";
    }
    return 0;
}