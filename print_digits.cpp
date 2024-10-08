#include<iostream>
using namespace std;

int printDigits(int n){
    int remainder;
    while(n!=0){
        remainder = n%10;
        n = n/10;
        cout<<remainder<<endl;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    printDigits(n);
}