#include<iostream>
using namespace std;


int checkPalindrome(int n){
    int x=0;

    while(n!=0){
        int remainder = n%10;
        x = x*10+remainder;
        n=n/10;
    }

    return x;
    
}

int main(){
    int n;
    cin>>n;


    int x = checkPalindrome(n);
    if(x==n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}