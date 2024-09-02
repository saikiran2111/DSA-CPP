#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,5,7,10};  //1Dimensional

    cout<<arr[0]<<"\n";
    cout<<arr[1]<<"\n";

    arr[0] = arr[0] + 22;
    cout<<arr[0]<<"\n";

    int arr2[2][3];
    arr2[0][2] = 5;

    cout<<arr2[0][2]<<"\n";
}