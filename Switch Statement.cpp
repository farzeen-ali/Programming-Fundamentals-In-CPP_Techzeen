#include<iostream>
using namespace std;
int main()
{
//	Switch Case Statement
//	allows us to execute a block of code among many alternatives
/*
	switch(variable_name)
	{
		case constant:
			//code execute
			break;
		.
		.
		.
		default:
			//code execute
		}
		
		Note:
		int char only works in switch statement
*/

	int day;
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		default:
			cout<<"Invalid Number";
	}
	return 0;
}
