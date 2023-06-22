#include<iostream>
using namespace std;
int main()
{
	//nested if-> multiple conditions
	int num;
	cout<<"Enter Any Number: "<<endl;
	cin>>num;
	
//	nested if
	if(num != 0 )
	{
		//nested if
		if(num>0)
		{
			cout<<"Your Number Is Positive."<<endl;
		}
		else{
			cout<<"Your Number Is Negative."<<endl;
		}
	}
	else{
		cout<<"Your Number Is Zero."<<endl;
	}
	
	return 0;
}
