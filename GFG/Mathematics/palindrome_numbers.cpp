#include<iostream>
#include<string>
using namespace std;
bool palindrome_check(int n){
    string str = to_string(n);
    int len= str.length();

    int i = 0;
    int j = len-1;
    while (i<len/2 && i<j){
        if (str[i]==str[j]){
            i++;
            j--;
        }
        else{
            cout<<"False";
            return false;
        }
    }
    cout<<"True";
    return true;

}

int main(){
    cout<<"5*  ";
    palindrome_check(10301);
    return 0;
}