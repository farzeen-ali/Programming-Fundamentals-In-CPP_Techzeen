#include<iostream>
using namespace std;
int main()
{
//	largest and smallest no in an array
	int arr[] = {12,4,1,34,6,8,-4,45,2,76};
	int largest = arr[0];
	int smallest = arr[0];
	
	for(int i =0; i<10; i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
		if(arr[i]<smallest)
		{
			smallest = arr[i];
		}
	}
	
	cout<<"The Largest Value Is: "<<largest<<endl<<"The Smallest Value Is: "<<smallest<<endl;
	return 0;
}
