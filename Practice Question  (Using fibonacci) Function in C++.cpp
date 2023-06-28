#include<iostream>
using namespace std;

int fibonacci(int num)
{
	if((num==1) || (num==0))
	{
		return num;
	}
	else{
		return(fibonacci(num-1) + fibonacci(num-2));
	}
}

int main()
{
	//Recursion -> function call itself
	//Fibonacci Series -> 0 1 1 2 3 5 8 13 21
	
	int num, i=0;
	cout<<"How Many Terms For Fibonacci Series: "<<endl;
	cin>>num;
	cout<<"Fibonacci Series For "<<num<<" is: "<<endl;
	
	while(i<num)
	{
		cout<<" "<<fibonacci(i);
		i++;
	}
	cout<<"\n";
	return 0;
}
