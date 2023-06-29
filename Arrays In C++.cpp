/*
****************************Arrays********************************
*)An array is a collection of elements of the same type placed in contiguous memory locations that can be 
individually referenced by using an index to a unique identifier.

Array's Indexing Starts With 0;

********************Declaration Of an Array***********************
int marks[5];   -----> array name->marks, which stores 5 elements(numbers)->int type

********************Initialization Of an Array***********************
marks[5] = {70,60,55,91,87};

********************Declaration + Initialization Of an Array***********************
int marks[5] = {70,60,55,91,87};

.)Loops are very Important in Arrays

*/

#include<iostream>
using namespace std;
int main()
{
//	Initialization and declaration
	
//	int num[5] = {20,40,60,89,45};
	
	//cout<<num[2];
	
	//cout<<"The Value of 2nd Index is: "<<num[2];	
//	
//	for(int i =0; i<5; i++)
//	{
//		cout<<"The Value of "<<i<<" number is: "<<num[i]<<endl;;
//	}
		
	int num[7];
	cout<<"Enter any 7 Numbers: "<<endl;
	
	for(int i = 0; i<7; i++)
	{
		cin>>num[i];
	}
	
	for(int j = 0; j<7; j++)
	{
		cout<<"The Value of "<<j<<" number is: "<<num[j]<<endl;;
	}
	return 0;
}
