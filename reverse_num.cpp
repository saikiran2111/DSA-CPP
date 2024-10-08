#include<iostream>
using namespace std;

int reverseNum(int n){
    int reverseNum = 0;

    while(n!=0){
        int remainder = n%10;   
        reverseNum = reverseNum * 10 + remainder;   
        n=n/10;                 
    }

    return reverseNum;
}

int main(){
    int n;
    cin>>n;

    cout<<reverseNum(n);
}