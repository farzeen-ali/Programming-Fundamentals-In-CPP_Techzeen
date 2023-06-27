#include<iostream>
using namespace std;
//function syntax
/*
dataType func-name(parameters) -> fromal paramters
{
	return
}
*/

//int sum(int a, b); -> not accpeted
//int sum(int, int); -> accpeted

//Function Prototype -> function declaration
//type func-name (parameters)
int sum(int a, int b);

void thanks();
int main()
{
	int num1, num2;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	
	cout<<"The Sum is: "<<sum(num1,num2)<<endl; //actual parameters
	thanks();
	thanks();
	thanks();
	thanks();
	thanks();
	return 0;
}
//function definition
int sum(int a, int b)
{
	int add = a+b;
	return add;	
}

void thanks()
{
	cout<<"Thanks For Wacthing This Video!!!";
}
