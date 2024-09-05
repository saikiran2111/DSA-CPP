#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d1;       //initializing a deque
    d1.push_back(5);     //pushing element at the end of the deque
    d1.push_front(3);    //pushing element at the front of the deque

    cout<<d1.front()<<endl;  //printing top element / first element in deque
    cout<<d1.back()<<endl;   //printing back element / last element in deque


    //printing deque using for loop
    for(int i=0;i<2;i++){   
        cout<<d1[i]<<" ";
    }
}