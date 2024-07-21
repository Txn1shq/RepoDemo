#include<iostream>
using namespace std;

int main() {
    string s = "tanishq";
    cout<<s[0]<<endl<<s[1]<<endl;
    int length = s.size();
    cout<<s[length - 1]<<endl;

//string stores characters within itself
//each data below is a char hence used single inverted commas 

    s[length -1] = 'k';
    cout<<s[length -1]<<endl;


    return 0;
}