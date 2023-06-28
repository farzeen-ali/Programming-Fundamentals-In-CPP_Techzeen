#include<iostream>
using namespace std;
int factorial(int num);
int main()
{
	//Factorial -> using recursion ->> 2!-> 2*1   5!= 5*4*3*2*1 =120  ->>>0 and 1 factorial = 1
	int num;
	cout<<"Enter Any Positive Integer: ";
	cin>>num;
	
	cout<<"The Factorial Of "<<num<<" is: "<<factorial(num);
	
	return 0;
}

int factorial(int num)
{
	if(num>1){
		return num*factorial(num-1);
	}
	else
	return 1;
}
