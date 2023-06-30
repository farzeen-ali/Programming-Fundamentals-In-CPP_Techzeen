#include<iostream>
using namespace std;
int main()
{
//	reverse an array using two arrays
	
	int firstArray[10], secondArray[10];
	for(int i=0; i<10; i++)
	{
		cout<<"Enter Number: "<<endl;
		cin>>firstArray[i];
	}
	int j = 0;
	for(int i = 9; i>=0; i--)
	{
		secondArray[j] = firstArray[i];
		j++;
	}
	cout<<"After Reversing an Array: "<<endl;
	for(int i = 0; i<10; i++)
	{
		cout<<secondArray[i]<<endl;
	}
	return 0;
}
