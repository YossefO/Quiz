#include <iostream>
using namespace std;

int main(){
    int num, arr[200],n1=-1,n2=-2;
    cin>>num; // 5

    for (int i=0; i<num;++i){
        cin>>arr[i]; // 10 20 3 30 7 
        if(arr[i]>n1){
            n2 = n1; // -1 10 20 
            n1 = arr[i]; // 10 20  30

        }
    }
    cout << n1 << " " << n2;


}