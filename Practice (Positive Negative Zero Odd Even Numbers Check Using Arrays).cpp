#include<iostream>
using namespace std;
int main()
{
	//checking no -> positive negative even odd and zero
	int arr[15];
	int positive = 0;
	int negative = 0;
	int even = 0;
	int odd = 0;
	int zero = 0;
	
	for(int i = 0; i<15; i++)
	{
		cout<<"Enter Numbers: "<<endl;
		cin>>arr[i];
		//positive
		if(arr[i]>0)
		{
			positive++;
		}
		else if(arr[i]<0)
		{
			negative++;
		}
		else{
			zero++;
		}
		if(arr[i]%2 == 0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<"Total Positive Numbers: "<<positive<<endl
	<<"Total Negative Numbers: "<<negative<<endl<<
	"Total Zeros: "<<zero<<endl<<"Total Even Numbers: "<<even<<endl
	<<"Total Odd Numbers: "<<odd<<endl;
	return 0;
}
