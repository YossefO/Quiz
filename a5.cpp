#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout<<"enter your frist number";
    cin>>num1;

    cout<<"enter your operator";
    cin>>op;

    cout<<"enter your second number";
    cin>>num2;



    if(op=='+'){
        cout<<num1+num2<<"\n";
    }

    else if(op=='-'){
        cout<<num1-num2<<"\n";
    }

    else if(op=='*'){
        cout<<num1*num2<<"\n";
    }

    else if(op=='/'){
        cout<<num1/num2<<"\n";
    }

    cout<<"Ok";
    
    return 0;
}