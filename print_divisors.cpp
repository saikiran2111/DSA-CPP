#include<iostream>
using namespace std;


int printDivisors(int n){        //O(n)
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}

int main(){
    int n;
    cin>>n;


    printDivisors(n);
}