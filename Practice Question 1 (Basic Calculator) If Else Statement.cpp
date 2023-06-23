#include<iostream>
using namespace std;
int main()
{
//	BAsic Calculator
	cout<<"Enter + To Perform Addition Operation: "<<endl;
	cout<<"Enter - To Perform Addition Operation: "<<endl;
	cout<<"Enter * To Perform Addition Operation: "<<endl;
	cout<<"Enter / To Perform Addition Operation: "<<endl;
	cout<<"Enter % To Perform Addition Operation: "<<endl;
	
	int firstNumber, secondNumber, result;
	char operation;
	cout<<"Enter Your First Number: "<<endl;
	cin>>firstNumber;
	cout<<"Enter Your Second Number: "<<endl;
	cin>>secondNumber;
	
	cout<<"Select Operation: "<<endl;
	cin>>operation;
	
	if(operation == '+')
	{
		result = firstNumber + secondNumber;
		cout<<"Addition of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
	else if(operation == '-')
	{
		result = firstNumber - secondNumber;
		cout<<"Subtraction of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
	else if(operation == '*')
	{
		result = firstNumber * secondNumber;
		cout<<"Multiplication of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
	else if(operation == '/')
	{
		result = firstNumber / secondNumber;
		cout<<"Divison of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
	else if(operation == '%')
	{
		result = firstNumber % secondNumber;
		cout<<"Remainder of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
	
	else{
		cout<<"Invalid Operation!"<<endl;
	}
	return 0;
}
