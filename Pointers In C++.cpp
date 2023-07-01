/*
******************Pointer***************************
data type which stores the address of other variable

&------> (address of) operator

*------> (dereference of) operator
*/
#include<iostream>
using namespace std;
int main()
{
	int var = 5;
	
//	Declaration + initialization of pointer
	int* p = &var;
	
	cout<<"The Value Of Var Variable is: "<<var<<endl;
	
	cout<<"The Address Of Var Variable is: "<<&var<<endl;
	
	cout<<"The Address Of Var Variable is: "<<p<<endl;
	
	cout<<"The Value Of Var Variable is: "<<*p<<endl;
	return 0;
}

