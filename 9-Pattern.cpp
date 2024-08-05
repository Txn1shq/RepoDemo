#include<bits/stdc++.h>
using namespace std;

void pattern7(int n) {
    for(int i = 0; i<n; i++) {
        for(int j=0; j <n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i +1; j++){
            cout<<"*";
        }
        for(int j=0; j <n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern8(int n) {
    for(int i =0; i<n; i++) {
        for(int j=0; j<i; j++){
            cout<<" "; 
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j <i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}
void pattern10(int n) {
    for(int i=1;i<=2*n-1;i++) {
        int stars= i;
        if(i>n) stars = 2*n-i;
        for(int j =1;j<=stars;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern11(int n) {
    for(int i=0;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if(j%2 ==1) {
                cout<<"1 ";
            }
            else if(j%2==0) {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
void pattern12(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<j;
        }
        for(int j=1;j<=2*n-2*i;j++) {
            cout<<" ";
        } 
        for(int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }   
}
void pattern13(int n) {
    int k=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k = k+1;
        }
        cout<<endl;
    }
}
void pattern14(int n) {
    char c= 96;
    for(int i=0;i<n;i++) {
        for(char c= 'A';c<='A'+i; c++) {
            cout<<c<<" ";

        }
        cout<<endl;
    }

}
void pattern15(int n) {
    for(int i=1;i<=n;i++) {
        for(char c= 'A'; c<='A'+(n-i);c++) {
        cout<<c<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n) {
    for(int i=0; i<n;i++) {
        char c='A'+i;
        for(int j=0;j<=i;j++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n) {
    for(int i=0;i<n;i++) {
                //space
                 for(int j=0;j<n-i-1;j++){
                    cout<<" ";
                }
                //letter
                char ch= 'A';
                int breakpoint = (2*i+1)/2;
                for(int j=1;j<=2*i+1;j++) {
                    cout<<ch;
                    if(j<=breakpoint) ch++;
                    else ch--;
                }

                //space
                for(int j=0;j<=n-i-1;j++) {
                    cout<<" ";
                }
                cout<<endl;
    }
}
void pattern18(int n) {
    for(int i=0;i<n;i++) {
        for(char c ='E'-i;c<='E';c++){
            cout<<c;
        }
        cout<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    for(int i = 0; i <t;i++) {              
        int n;                              
        cin>>n;
        pattern18(n);
    }
    return 0;
}