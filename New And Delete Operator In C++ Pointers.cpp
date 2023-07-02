/*
Dynamic Memory Allocation: process of assigning the memory space during the execution time or run time

New Operator (Keyword): allocates memory to a variable

Delete Operator (Keyword): deallocates memory to a variable
*/
#include<iostream>
using namespace std;
int main()
{
	int size;
	int* ptr;
	cout<<"Enter Number Of Values You Want To Store In An Array: "<<endl;
	cin>>size;
	
	ptr = new int[size];
	cout<<"Enter The Values: "<<endl;
	for(int i =0; i<size; i++)
	{
		cin>>ptr[i];
	}
	cout<<"Values In The Array Are: "<<endl;
	for(int i =0; i<size; i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete []ptr;
	cout<<"Values In The Array After Memory Deallocation: "<<endl;
	for(int i =0; i<size; i++)
	{
		cout<<ptr[i]<<endl;
	}
	
	return 0;
}
