#include<iostream>
using namespace std;

/*grading numbers to students
91 to 100 = a
81 to 90 = b
71 to 80 = c
61 to 70 = d 
51 to 60 = e
below 50 = f*/


int main() {
    float score;
    cout<<"please enter your grade: ";
    cin>>score;

    if(score<50) {
        cout<<"your grade is F, better luck next time";
    }
    else if(score<=60) {
        cout<<"your grade is E, can do better!!";
    }
    else if(score<=70){
        cout<<"your grade is D, can do better!!";
    }
    else if (score<=80) {
        cout<<"your grade is C, can do better!!";
    }
    else if (score<=90) {
        cout<<"your grade is B, well done!!";
    }
    else if(score<=100) {
        cout<<"congratulations, your grade is A!!";
    }
    return 0;
}