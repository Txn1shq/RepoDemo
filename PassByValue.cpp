#include<bits/stdc++.h>
using namespace std;

void kuchkar(int num) {
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
}

void kuchkar(string s) {
    s[0] = 't';
    cout<<s<<endl;

}
int main() {
    int num = 10;
    kuchkar(num);
    cout<< num <<endl;
    

    string s = "raj";
    kuchkar(s);
    cout<<s<<endl;



    return 0;
}