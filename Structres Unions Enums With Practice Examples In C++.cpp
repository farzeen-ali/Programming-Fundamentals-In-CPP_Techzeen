/*
********************************Structures In C++***************************************************
A collection of variables of different data types under a single name.
Syntax:
struct structureName
{
	//data (struct members)
};

*How to define s structure Variable
stuctureName variableName;

*how to access members of a structure
variableName.data = value;

******************************Union*****************************************
A user defined type in which all members share the same memory location
Syntax:
union unionName
{
	//data (union members)
};

**************************Enumeration(Enum)*************************************
A data Type consisting of named values like elements,members,etc.., that represents integral constants
Suntax:
enum enumName {data1, data2, ...... datan};
*/

////Structure
//#include<iostream>
//using namespace std;
//struct employee {
//	int sno;
//	int empId;
//	string empName;
//	string empCity;
//};
//int main()
//{
//	struct employee ep;
//	ep.sno = 1;
//	ep.empId = 123;
//	ep.empName = "Farzeen";
//	ep.empCity = "Karachi";
//	
//	cout<<"S.No: "<<ep.sno<<endl;
//	cout<<"Emp ID: "<<ep.empId<<endl;
//	cout<<"Emp Name: "<<ep.empName<<endl;
//	cout<<"Emp City: "<<ep.empCity<<endl;
//	
//	return 0;
//}

//Structure 2nd Program
//
//#include<iostream>
//using namespace std;
//struct employee {
//	int sno;
//	int empId;
//	string empName;
//	string empCity;
//};
//int main()
//{
//	struct employee farzeen;
//	cout<<"***********Enter The Data For First Employee*************"<<endl;
//	cout<<"Enter Serial Number: ";
//	cin>>farzeen.sno;
//	cout<<"Enter Emp Id: ";
//	cin>>farzeen.empId;
//	cout<<"Enter Employee Name: ";
//	cin>>farzeen.empName;
//	cout<<"Enter Employee City: ";
//	cin>>farzeen.empCity;
//	
//	struct employee ali;
//	cout<<"***********Enter The Data For Second Employee*************"<<endl;
//	cout<<"Enter Serial Number: ";
//	cin>>ali.sno;
//	cout<<"Enter Emp Id: ";
//	cin>>ali.empId;
//	cout<<"Enter Employee Name: ";
//	cin>>ali.empName;
//	cout<<"Enter Employee City: ";
//	cin>>ali.empCity;
//	
//	cout<<"The First Employee Name is: "<<farzeen.empName<<endl;
//	cout<<"The Second Employee Name is: "<<ali.empName<<endl;
//	
//	return 0;
//}


//*************Union************************
//
//#include<iostream>
//using namespace std;
//union dataInfo {
//	int sno;
//	char letter;
//	float salary;
//};
//int main()
//{
//	union dataInfo di;
//	di.sno = 1;
//	cout<<"S.No: "<<di.sno<<endl;
//	di.letter = 'f';
//	cout<<"Letter: "<<di.letter<<endl;
//	di.salary = 68.89;
//	cout<<"Salary: "<<di.salary<<endl;
//	return 0;
//}

//******************Enum******************************
//
//#include<iostream>
//using namespace std;
//
//enum week {
//		Sunday,
//		Monday,
//		Tuesday,
//		Wednesday,
//		Thursday,
//		Friday,
//		Saturday
//};
//
//int main()
//{
//	enum week today;
//	today = Wednesday;
//	cout<<"Day: "<<(today+1);
//	return 0;
//}











