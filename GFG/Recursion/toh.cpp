#include<iostream>
#include<chrono>
using namespace std;

void toh(int n,char a,char b ,char c){
    if (n==1){
        //cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
        return;
    }
    toh(n-1,a,c,b);
    //cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c);
}

int main(){
    char a= 'A';
    char b= 'B';
    char c= 'C';
    auto start = std::chrono::high_resolution_clock::now();
    toh(25,a,b,c);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    // Print the elapsed time
    cout << "Elapsed time: " << duration << " milliseconds" << endl;
    return 0;
}