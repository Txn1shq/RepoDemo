#include<iostream>
using namespace std;

/*
take the day no and print the corresponding day
for 1 print monday
for 2 print tuesday and so on
*/

int main() {
    int day;
    cout<<"Enter the day number: ";
    cin>>day;

    switch(day) {
        case 1:
            cout<< "monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thursday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7: 
            cout<<"sunday";
            break;
        default: 
            cout<<"Invalid entry"; 
            break;
        cout<<"check inside switch";
    }
    cout<< " check"<<endl;
  
    return 0;
}