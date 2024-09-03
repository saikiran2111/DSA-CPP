#include<iostream>
#include <utility>   
using namespace std;

int main() {
    pair<int, char> p1(1, 'a');  // Direct initialization using constructor
    cout << p1.first << " " << p1.second << endl;

    pair<int,int> p2(1,3);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int, pair<int, char> > p3(3, pair<int, char>(4, 'd'));
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    pair<int, int> arr[] = {pair<int,int>(1, 2), pair<int, int>(3, 4), pair<int, int>(4, 5)};

    for(int i=0;i<3;i++){
        cout << arr[i].first << ", " << arr[i].second << endl;
    }


    return 0;
}
