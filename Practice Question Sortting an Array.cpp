#include<iostream>
using namespace std;
int main()
{
//	sorting an array
	int temp, arr[20], size;
	cout<<"Enter Size (Max 20) of an Array: "<<endl;
	cin>>size;
	
	cout<<"Enter Array Elements: "<<endl;
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Stored Data Before Sorting: "<<endl;
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	for(int i =0; i<size; i++)
	{
		for(int j =0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout<<"Sorted Array: "<<endl;
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
