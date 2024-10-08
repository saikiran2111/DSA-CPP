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


    if(divisors.size()==2){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Non Prime Number"<<endl;
    }

}

int main(){
    int n;
    cin>>n;


    printDivisors(n);
}