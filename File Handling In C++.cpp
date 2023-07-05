/*
***************************File Handling In C++ ******************************************
*)Files Are used to store data permanently.
*)Streams: represents a device on which input and output operations are performed
Data Type:
*ofstream: used to create files and to write information to files
*ifstream: used to read information from the files
*fstream: capabilities of both ifstream and ofstream
*/
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int sno, salary;
//	char name[50];
//	
//	cout<<"Enter S.No: ";
//	cin>>sno;
//	cout<<"Enter Your Name: ";
//	cin>>name;
//	cout<<"Enter Salary: ";
//	cin>>salary;
//	
////	int a;
//	ofstream myFile("kuchbhi.txt");
//	myFile<<sno<<"\t"<<name<<"\t"<<salary<<endl;
//	myFile.close();
//	
//	cout<<"Data Is Stored!!!"<<endl;
//	
//	ifstream mF("kuchbhi.txt");
//	mF>>sno>>name>>salary;
//	mF.close();
//	
//	cout<<endl<<sno<<"\t"<<name<<"\t"<<salary<<endl;
//	return 0;
//}


//Second Program

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter Your Name and Age: "<<endl;
	cin.getline(arr,100);
	
	ofstream outputFile("Hi.txt",ios::app);
	outputFile<<arr;
	outputFile.close();
	
	cout<<"File Write Operation Performed!!!"<<endl;
	cout<<"Reading form the File: "<<endl;
	char myarr[100];
	ifstream obj("Hi.txt");
	obj.getline(myarr,100);
	cout<<"The Result Is: "<<myarr<<endl;
	cout<<"File Read Operation is Performed!!!"<<endl;
	obj.close();
	return 0;
}












