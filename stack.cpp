#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st1;
    st1.push(1);   //pushing/inserting the element in the stack
    st1.push(8);
    st1.push(4);
    st1.push(7);
    st1.emplace(3); //pushing/inserting the element in the stack

    cout<<st1.top()<<endl;  //printing top element
    st1.pop();              //removing top element
    cout<<st1.top()<<endl;
}


//PUSH,POP,TOP -> O(1)