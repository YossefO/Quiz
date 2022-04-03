

#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cout<<"enter 1"<<"\n";
	cin>>num1;
    cout<<"enter 2"<<"\n";
    cin>>num2;



	num3 = num2;	

	
	num2 = num1;		

	
	num1 = num3;

	cout<<num1<<" "<<num2<<endl;	




	return 0;
}