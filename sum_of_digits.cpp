//Sum of all digits of the numbers   between two intervals
#include<iostream>
using namespace std;

int sum(int i){

    int sum = 0;

    while(i!=0){
        int lastDigit = i%10;
        sum+=lastDigit;
        i=i/10;
    }

    return sum;
}

int sumDigits(int n1,int n2){
    int final_sum = 0;
    for(int i=n1;i<n2+1;i++){
        final_sum += sum(i);
    }

    return final_sum;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;

    cout<<sumDigits(n1,n2);
}