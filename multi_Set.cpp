#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> mst1;
    mst1.insert(3);
    mst1.insert(7);
    mst1.insert(3);
    mst1.insert(3);
    mst1.insert(3);
    mst1.insert(3);
    mst1.insert(7);

    int count = mst1.count(3);
    cout<<count<<endl;

    mst1.erase(mst1.find(3));  //this will erase first occurence of an element using find function
    // mst1.erase(3); //this is erase all occurences of an element
    int count2 = mst1.count(3);
    cout<<count2<<endl;
    return 0;
}