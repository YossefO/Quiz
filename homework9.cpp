#include <iostream>
using namespace std;

int main(){
    int x;
    int y;

    cout<<"Enter"<<endl;
    cin>>x;
    cin>>y;
    while (x<y)
    {
        cout<<x<<"\n";
        x++;
    }
    cout<<y;
    
}