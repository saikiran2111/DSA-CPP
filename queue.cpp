#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;       //intializing queue
    q1.push(4);          //pushing element into queue
    q1.push(3);
    q1.push(2);

    q1.front() += 10;
    cout<<q1.front();    //printing top most element
    cout<<q1.back();     //printing bottom most element

    q1.pop();
    cout<<q1.front();   //removing top most element or first element from left
}