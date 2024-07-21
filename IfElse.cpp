#include<iostream>
using namespace std;

// build a program which tells whether the user is an adult or  not

int main () {
    int e;
    cin >> e;

    if(e >= 18) { 
        cout<<"You are an adult"<<endl;
    }
    else if(e < 18) {
        cout<<"You are not an adult"<<endl;
    }

    return 0;
}