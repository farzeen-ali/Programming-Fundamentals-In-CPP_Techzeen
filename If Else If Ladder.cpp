#include<iostream>
using namespace std;
int main()
{
	//if else-if ladder
	int num;
	cout<<"Enter Any Number B/w 1 to 12: "<<endl;
	cin>>num;
	
//	If Else If Ladder
	if(num == 1)
	{
		cout<<"January"<<endl;
	}
	else if(num == 2)
	{
		cout<<"February"<<endl;
	}
	else if(num == 3)
	{
		cout<<"March"<<endl;
	}
	else if(num == 4)
	{
		cout<<"April"<<endl;
	}
	else if(num == 5)
	{
		cout<<"May"<<endl;
	}
	else if(num == 6)
	{
		cout<<"June"<<endl;
	}
	else if(num == 7)
	{
		cout<<"July"<<endl;
	}
	else if(num == 8)
	{
		cout<<"August"<<endl;
	}
	else if(num == 9)
	{
		cout<<"September"<<endl;
	}
	else if(num == 10)
	{
		cout<<"October"<<endl;
	}
	else if(num == 11)
	{
		cout<<"November"<<endl;
	}
	else if(num == 12)
	{
		cout<<"December"<<endl;
	}
	else {
		cout<<"Invalid Number";
	}
	return 0;
}
