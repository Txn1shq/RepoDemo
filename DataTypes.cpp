#include<iostream>
using namespace std;

int main() {
    int a = 123;
    cout<<a<<endl;

    char b = 't';
    cout<<b<<endl;

    bool c = true;
    cout<<c<<endl;

    double d = 1.23;
    cout<<d<<endl;

    float f = 1.2;
    cout<<f<<endl;

    int sizea = sizeof(a);
    int sizeb = sizeof(b);
    int sizec = sizeof(c);
    int sized = sizeof(d);
    int sizef = sizeof(f);
    
    cout<<"size of a is:"<<sizea<< endl;
    cout<<"size of b is:"<<sizeb<< endl;
    cout<<"size of c is:"<<sizec<< endl;
    cout<<"size of d is:"<<sized<< endl;
    cout<<"size of f is:"<<sizef<< endl;


}