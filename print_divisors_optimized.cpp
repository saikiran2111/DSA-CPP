#include<iostream>
#include<vector>
using namespace std;


void printDivisors(int n){       
    vector<int> divisors;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divisors.push_back(i);
            if(n/i != i){
                divisors.push_back(n/i);
            }
        }
    }


    for(auto i:divisors){
        cout<<i<<" ";
    }


    
}

int main(){
    int n;
    cin>>n;


    printDivisors(n);
}