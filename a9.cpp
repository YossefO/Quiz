#include <iostream>
using namespace std;

int main() {
    
    int num1;
    int num2;

    cout<<"enter"<<"\n";

    cin>>num1>>" ">>num2;

    while(num1<6){
        num2+=num1;
        ++num1;
    }
    cout<<num2;


    cout<<"";
    return 0;
}