/*
**********************************Loops In C++*******************************************
A loop is used for executing a block of statements repeatedly until a particular condition is satisfied.

1)For Loop: 
	Syntax:
		for (initialization; condition; update) 
		{
		    // body of-loop 
		}

2)While Loop:
	Syntax:
		while (condition) 
		{
    		// body of the loop
		}

3)Do-While Loop:
the body of do while loop is executed "once before the condition is checked".
	Syntax:
		do 
		{
   			// body of loop;
		}
		while (condition);

*/
#include<iostream>
using namespace std;
int main()
{
//	for loop 
// table of 2
//	cout<<"************Table Of 2************"<<endl;
//	for(int i = 1; i<=10; i++)
//	{
//		cout<<"2 x "<<i<<" = "<<i*2<<endl;
//	}

//	while
	int var = 0;
//	while(var<10)
//	{
//		cout<<var;
//		var++;
//	}

//	do while loop
	do {
		cout<<"Jalwa Hai Do While Loop Ka"<<endl;
		var++;
	}
	while(var<5);	
	return 0;
}
