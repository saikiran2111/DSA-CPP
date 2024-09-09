#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1,3,5,7,9,11};

    for(vector<int>::iterator i=v1.begin() ;i!=v1.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;

    //ERASE
    v1.erase(v1.begin()+2);  //2nd index element will be deleted

    for(vector<int>::iterator i=v1.begin() ;i!=v1.end();i++ ){
        cout<<"Index "<<*i<<" ";
    }
    cout<<endl;

    v1.erase(v1.begin(),v1.begin()+3);  //deleting multiple elements from vector wrt to indexing 

    for(vector<int>::iterator i=v1.begin() ;i!=v1.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;


    //INSERT
    vector<int> v5 = {0,2,4,6,8,10};
    v5.insert(v5.begin(),5);  //inserting element/5 at begin/first position

    for(vector<int>::iterator i=v5.begin() ;i!=v5.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;

    v5.insert(v5.begin()+2,2,8); //insert 2 elements at index 2 with values 8 and 8
    for(vector<int>::iterator i=v5.begin() ;i!=v5.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;

    vector<int> v6 = {20,25};
    v5.insert(v5.begin(),v6.begin(),v6.end()); //inserting elements from v6 begin to v6 end into v5 begin place
    for(vector<int>::iterator i=v5.begin() ;i!=v5.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;

    //SIZE
    cout<<"Size "<<v5.size()<<endl;

    //REMOVE LAST ELEMENT
    v5.pop_back(); //It will remove the last lement from the vector
    for(vector<int>::iterator i=v5.begin() ;i!=v5.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;

    vector<int> v7 = {1,2};
    vector<int> v8 = {3,4};

    //SWAP VALUES BETWEEN VECTORS
    v7.swap(v8); //v7 -> 3,4 and v8 -> 1,2

    for(vector<int>::iterator i=v7.begin() ;i!=v7.end();i++ ){
        cout<<*i<<" ";
    }
    cout<<endl;


    //CLEAR
    v8.clear(); //erases all elements from vector


    //EMPTY  
    cout<<v7.empty()<<endl; //check if the vector is empty or not(Empty returns 1 or else return 0)






     

}