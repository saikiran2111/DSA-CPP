#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v1 = {1,3,5,7,9};
    v1.push_back(11);   // add element at the end of the vector
    v1.push_back(13);
    v1.push_back(15);
    v1.push_back(17);

    // for(int i=0;i<9;i++){
    //     cout<<v1[i]<<" ";
    // }

    vector<int> v2(5,56);  //creating vector of size 5 and all elements are 56
    // for(int i=0;i<5;i++){
    //     cout<<v2[i]<<" ";
    // }

    vector<int> v3(v1);  //copying v1 vector values into v3
    // for(int i=0;i<9;i++){
    //     cout<<v3[i]<<" ";
    // }

    vector<pair<int,int>> v4;  //vector of integer pairs
    v4.push_back({2,4});
    v4.push_back({6,8});

    cout<<v4[0].first<<" "<<v4[0].second<<endl;

    //Iterator

    vector<int>::iterator i = v1.begin();   //vector.begin
    cout<<*i<<endl; //0th element
    cout<<*(i+1)<<endl; //1st element
    cout<<*(i+2)<<endl; //2nd element

    vector<int>::iterator i1 = v1.end();   //vector.end
    cout<<*(i1-1)<<endl; //nth element / last element

    //for loop
    cout<<"Printing vector "<<endl;

    for(vector<int>::iterator i = v1.begin(); i != v1.end(); i++){  //printing whole vector using for loop
        cout<<*i<<" ";
    }

    cout<<"Printing vector using auto for loop "<<endl;
    for(auto i = v1.begin();i != v1.end();i++){
        cout<<*i<<" ";
    }


    //for each
    cout<<"For each loop"<<endl;
    for(int k:v1){
        cout<<k<<" ";
    }

    cout<<"For each auto for loop"<<endl;
    for(auto k:v1){
        cout<<k<<" ";
    }



    return 0;
}