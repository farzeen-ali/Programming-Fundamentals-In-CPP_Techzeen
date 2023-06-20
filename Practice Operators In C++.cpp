#include<iostream>
using namespace std;
int main()
{
	int value1, value2;
	//Assignment
	value1 = 4;
	value2 = 2;
	
	//Inc and Dec Operators
	//Pre
	cout<<++value1<<endl;
	cout<<--value1<<endl;
	//Post Inc
	cout<<value1++<<endl;
	cout<<value1<<endl;
	//Post
	cout<<value1--<<endl;
	cout<<value1<<endl;
	
	//Arithmetic Binary Op
	cout<<"Sum is: "<<value1+value2<<endl;
	cout<<"Sub is: "<<value1-value2<<endl;
	cout<<"Mul is: "<<value1*value2<<endl;
	cout<<"Div is: "<<value1/value2<<endl;
	cout<<"Remainder is: "<<value1%value2<<endl;
	
	//Relational Operator
	cout<<(value1>value2)<<endl;
	cout<<(value1<value2)<<endl;
	cout<<(value1>=value2)<<endl;
	cout<<(value1<=value2)<<endl;
	cout<<(value1==value2)<<endl;
	cout<<(value1!=value2)<<endl;
	
	//Logical Op
	cout<<((value1>value2) && (value2<value1))<<endl;
	cout<<((value1<value2) || (value2<value1))<<endl;
	cout<<(!(value1>value2));
	
	//ternary
	string output;
	output = (value1>value2) ? "Yes" : "No";
	cout<<output<<endl;
	
	//shorthand
	cout<<"+= shorthand is : "<<(value1+=value2)<<endl; //value1 = 4 value2 = 2-> value1+=value2 -> value1=4+2 -> value1 = 6
	cout<<"-= shorthand is : "<<(value1-=value2)<<endl; // 6-2 value1 =4
	cout<<"*= shorthand is : "<<(value1*=value2)<<endl;	// 4*2 value1 = 8
	cout<<"/= shorthand is : "<<(value1/=value2)<<endl; // 8/2 value1 = 4
	cout<<"%= shorthand is : "<<(value1%=value2)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
