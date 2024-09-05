#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1;          //intializing list(doubly linked list)
    l1.push_back(3);      //pushing element at end
    l1.emplace_back(4);   //pushing element at end
    l1.push_front(2);     //pushing element at start/front
    l1.emplace_front(1);   //pushing element at start/front

    //1,2,3,4

    l1.pop_back();    // 1,2,3

    cout<<l1.back()<<endl; //3
    cout<<l1.front()<<endl; //1

    l1.pop_front(); //2,3

    cout<<l1.front()<<endl; //2

}