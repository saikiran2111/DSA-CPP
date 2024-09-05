#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> prq;   //Maximum value will be stored at the top, elements will be in sorted order
    prq.push(1);
    prq.push(5);
    prq.push(8);
    prq.emplace(3);

    cout<<prq.top();

    prq.pop();
    cout<<prq.top();
}