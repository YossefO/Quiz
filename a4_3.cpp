#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    string U ;
    string S;
    int v;


    
    cout <<"Enter name  ";
    cin>>name;
    cout<<"Hello"<<" "<<name<<"\n";
    cout<<"What's your age "<<" "<<name<<" ";
    cin>>age;

    if(age<=15){
        cout<<"Wow you are young"<<"\n";
        cout<<"In what grade are you?"<<"\n";
        cout<<"Primary (pr),Preparatory (pre) ?"<<"\n";
        cin>>S;

        if(S=="pr"){
            cout<<"Which level are you in primary?"<<"\n";
            cin>>v;
        }

        else if(S=="pre"){
            cout <<"Which level are you in prep?"<<"\n";
            cin>>v;
        }

        else{
            cout<<" try again!!!!!"<<"\n";
        }
        cout<<"";
    }

    else if(age<=25){
        cout<<"Wow you are in the prime of your youth"<<"\n";
        cout<<"Are you in university?"<<"(y),(n)";
        cin>>U;
        if(U=="y"){
            cout <<"Which level are you in university?"<<"\n";
            cin>>v;
        }

        else{
            cout<<"What are you in?";
            cin>>v;
        }


        
    }
    else if( age<=40){
        cout<<"Wow you are  old"<<"\n";
    }
    cout<<"Great"<<" "<<name;
    return 0;
}