#include<iostream>
using namespace std;

/* if age < 18 then not eligible for job
if age >= 18 then eligible for job
if age >= 55 and age <= 57 
then eligbible for job but retirement soon
if age>57 then retirement time*/

int main() {
    int age;
    cout<<"please enter your age: ";
    cin>>age;

    if(age<18) {
        cout<<"you are not eligible for job";
    }
    else if(age<=57) {
        cout<<"you are eligible for the job";
        if(age>=55) {
            cout<<" but retirement soon :("<<endl;
        }
    }
    else if(age>57) {
        cout<<"retirement";
    }
    return 0;
}