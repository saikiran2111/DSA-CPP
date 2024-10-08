// count digits that evenly divides a number

#include<iostream>
using namespace std;

int countDigitsThatDivideNum(int n){
    int count = 0;
    int n2 = n;
    while(n!=0){
        int lastDigit = n%10;
        n=n/10;
        if(n2%lastDigit==0){
            count = count+1;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    cout<<countDigitsThatDivideNum(n);
}