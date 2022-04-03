

#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3, temp = -1;



	cin>>num1>>num2>>num3;

	
	temp = num2;
	num2 = num1;
	num1 = temp;

	
	temp = num3;
	num3 = num2;
	num2 = temp;

	cout<<num1<<" "<<num2<<" "<<num3<<"\n";

	
	cin>>num1>>num2>>num3;
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;

	cout<<num1<<" "<<num2<<" "<<num3<<"\n";


	return 0;
}