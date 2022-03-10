#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    cout<<"Enter name  ";
    cin>>name;
    cout<<"Hello"<<" "<<name<<"\n";
    cout<<"What's your age "<<" "<<name<<" ";
    cin>>age;

    if(age<=10){
        cout<<"Wow are you young"<<"\n";
    }

    else if(age<=25){
        cout<<"Wow you are in the prime of your youth"<<"\n";
    }
    else if( age<=40){
        cout<<"Wow are you old"<<"\n";
    }
    cout<<"Thanks"<<" "<<name;
    return 0;
}