#include<iostream>
using namespace std;

int main() {
    int v = 123;
    cout<<v<<endl;    /* print integer a*/

    char b = 't';
    cout<<b<<endl;

    bool c = true;
    cout<<c<<endl;

    double d = 1.23;
    cout<<d<<endl;

    float f = 1.2;
    cout<<f<<endl;

    string s1 = "hey";
    string s2 = "tanishq";

    int sizea = sizeof(v);
    int sizeb = sizeof(b);
    int sizec = sizeof(c);
    int sized = sizeof(d);
    int sizef = sizeof(f);
    
    cout<<"size of a is:"<<sizea<< endl;
    cout<<"size of b is:"<<sizeb<< endl;
    cout<<"size of c is:"<<sizec<< endl;
    cout<<"size of d is:"<<sized<< endl;
    cout<<"size of f is:"<<sizef<< endl;

    int t = 'a';
    cout<<t<<endl;    /* type casting */

    char ch = 98;
    cout<<ch<<endl;    /* type casting */

    char ch1 = 97;
    cout<<ch1<<endl;

    cout <<s1<<" "<<s2<<endl;

    string str;
    getline(cin, str);
    cout<<str<<endl;
     
    int x, y;
    cin>>x>>y;

    cout<<"the value of x is:"<<x<<endl;
    cout<<"the value of y is:"<<y<<endl;

    string p1, p2;
    cin>>p1>>p2;
    cout<<p1<<" "<<p2<<endl;
    return 0;
}