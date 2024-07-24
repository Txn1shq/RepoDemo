#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;
}

int main() {
    int num1, num2;
    cin>> num1>>num2;
    int res = sum(num1, num2);
    cout<<res<<endl;

    int num4 = min(num1, num2);
    cout<<num4<<endl;

    int num5 = max(num1, num2);
    cout<<num5<<endl;

    return 0;
}