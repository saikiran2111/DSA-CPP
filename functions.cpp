#include<iostream>
using namespace std;


// int a -> passby value 
// int &a -> passby reference

int addition(int a,int b,int c){
    return a+b+c;
}

int increment(int a){
    return a+1;
}

int decrement(int &b){
    b = b-1;
    return b;
}

int decrement1(int &b){
    return b-1;
}

int incrementArr(int arr[]){   //Array always pass by reference
    arr[2] =  arr[2] + 10;
    cout<<"Inside function"<<arr[2]<<endl;
    return arr[2];
}

int main(){
    int a = 10;
    int b = 25;
    int c = 3;



    int arr[5] = {1,3,5,7,9};

    incrementArr(arr);

    cout<<"Inside main"<<arr[2]<<endl;

    cout<<addition(a,b,c)<<endl;
    cout<<"From funtion : "<<increment(a)<<endl;
    cout<<"From main : "<<a<<endl;
    cout<<"From funtion : "<<decrement1(b)<<endl;
    cout<<"From main : "<<b<<endl;



}


// function doesn't return anything -> void