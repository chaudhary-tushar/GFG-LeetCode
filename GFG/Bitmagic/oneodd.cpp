#include<iostream>
#include<vector>
using namespace std;



int checkodd(vector<int> a){
    int odd=0;
    int len=a.size();
    for (int i =0;i<len;i++){
        odd = odd^(a[i]);
    }
    return odd;
}

int main (){
    vector<int> numbers = {1,2,3,4,5,6,7,8,9,7,4,1,8,5,2,6,3};
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i];
    }
    
    cout<<endl<<"The odd one out is : "<<checkodd(numbers);
    return 0;
}