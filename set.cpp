#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(3);
    s1.insert(7);
    s1.insert(5);
    s1.insert(3);
    s1.insert(5);
    s1.insert(1);


    // auto it1 = s1.find(5);
    // cout<<it1<<endl;
    cout<<s1.count(7);

}