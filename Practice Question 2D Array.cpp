#include<iostream>
using namespace std;
int main()
{
	
/*
00 01  02
10 11  12
*/
//	2D Array
	int row, column, arr[10][10];
	cout<<"Enter No of rows and columns: ";
	cin>>row>>column;
	cout<<"Enter "<<row*column<<" Array Element: "<<endl;
	for(int i =0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cin>>arr[i][j];
		}
	}
		for(int i =0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cout<<arr[i][j]<<" ";
			cout<<endl;
		}
	}
	
	cout<<"Array Elements With Its Indexes: "<<endl;
	for(int i =0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<" ";
			cout<<endl;
		}
	}
	
	return 0;
}
