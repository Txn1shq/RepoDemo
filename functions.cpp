#include<bits/stdc++.h>
using namespace std;
/*
void              which doesn't return anything
return            
parameterised     
non parameterised 
*/
void printName(string name) {
    cout<<"hey " <<name<<endl;
}

int main() {
    string name;
    cout<<"entr first name: ";
    cin >> name;
    printName(name);

    string name2;
    cout<<"enter second name: ";
    cin >>name2;
    printName(name2);

    return 0;
}