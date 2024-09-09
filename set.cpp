#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s1;    //intializing empty set
    s1.insert(3);   //inserting elements into set
    s1.insert(7);
    s1.insert(5);
    s1.insert(2);
    s1.insert(5);
    s1.insert(1);


    // auto it1 = s1.find(5);
    // cout<<s1.count(7)<<endl;

    // s1.erase(it1);  //{3,7,3,1}    erasing 5 using iterator

    cout<<s1.count(5)<<endl;

    auto it2 = s1.find(3);
    auto it3 = s1.find(1);

    s1.erase(it2,it3);

    cout<<s1.count(3)<<endl;

}