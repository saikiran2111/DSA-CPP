// Find the Kth digit from the right A^B(A power B)

#include<iostream>
using namespace std;


int kthDigit(int A,int B,int k){
    int finalNum = pow(A,B);
    int lastDigit;
    while(finalNum!=0 && k!=0){
        lastDigit = finalNum%10;
        k--;
        finalNum=finalNum/10;
    }
    
    return lastDigit;
    
}
int main(){
    int A,B,k;
    cin>>A>>B>>k;

    cout<<kthDigit(A,B,k);
}