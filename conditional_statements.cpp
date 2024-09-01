#include<iostream>
using namespace std;

int main(){
    int score;
    cin>>score;

    if(score>=100){
        cout<<"Century completed"<<endl;
    }
    else if(score>=50){
        cout<<"Half-Century completed"<<endl;
    }
    else{
        cout<<"Half-Century not yet completed!"<<endl;
    }


    return 0;
}