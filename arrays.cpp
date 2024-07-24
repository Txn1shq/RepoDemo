#include<iostream>
using namespace std;

int main() {
    int arr[5];
    for (int i = 0; i<= 4; i = i+1) {
        cin>>arr[i];

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[3] += 10;
    cout<<arr[3]<<'\n';

    return 0;
}


// 2d arrays
/*
 int main() {
    int arr[3][5];

    arr[1][3] = 78;
    cout<<arr[1][3]<<endl<<arr[0][4]<<endl;


    return 0;
 }
 */