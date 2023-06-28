#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//	sqrt -> builtin function
	double num, squareRoot;
	cout<<"Enter Number: ";
	cin>>num;
	
	squareRoot = sqrt(num);
	
	cout<<"The Square Root Of "<<num<<" is: "<<squareRoot;
	return 0;
}
