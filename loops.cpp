#include<iostream>
using namespace std;

int main(){
    cout<<"For loop"<<endl;
    for(int i=1;i<=10;i++){
        cout<<i<<"\n";
    }

    cout<<"While loop"<<endl;
    int i=20;
    while(i<=30){
        cout<<i<<endl;
        i++;
    }

    cout<<"Do while loop"<<endl;
    int j = 31;
    do{
        cout<<j<<endl;
    }
    while(i<=5);

    return 0;
}