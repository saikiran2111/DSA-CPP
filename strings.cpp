#include<iostream>
using namespace std;


int main(){
    string name = "saikiran";

    int len = name.size();
    cout<<len<<"\n";
    name[len-1] = 'm';
    cout<<name<<endl;
}