// Identify Late Employees
// A finger print machine is kept in an industry, given the details of employees, their arrival time on a particular day and expected arrival time of employees, design a OOP model and write a C++ code to print the employee id and name of employees who came late. Understand the precode and application program to do the implementation.

// Input Format

// Number of employees

// Employee id1

// Employee name1

// Arrival time of employee1

// Employee id2

// Employee name2

// Arrival time of employee2

// ...

// Employee id-n

// Employee name-n

// Arrival time of employee-n

// Expected arrival time of employee-n

// All time is given hours followed by minutes followed by seconds

// Output Format

// Employee id and name of all employees who came late













#include<iostream>
using namespace std;
//Class used to represent time of arrival
// and expected arrival time
class UDtime
{
	int hours;
	int min;
	int sec;
	public:
	//Overload to return true when the time1 is less than time2
	bool operator<(UDtime&);
	friend istream& operator>>(istream&,UDtime&);
	friend ostream& operator<<(ostream&,UDtime&);
};
class emp
{
	
	int empid;
	char name[20];
	UDtime arr_Time;
	public:	
	friend istream& operator>>(istream&,emp&);
	friend ostream& operator<<(ostream&,emp&);	
	//function to return arrival time of an employee
	UDtime get_Time();
	void operator[](int);
};
bool UDtime :: operator<(UDtime &u) {

  if(u.hours == hours) {
        if(u.min == min) {
            if(u.sec < sec) {
                return false;
            }else return true;
        }
        else{
            if(u.min < min) {
                return false;
            }else return true;
        }
        return false;
    } else{
        if(u.hours < hours) {
            return false;
        } else return true;
    } 
    if(u.hours < hours) {
        return true;
    } else {
        return false;
    }
}
UDtime emp :: get_Time() {
    return arr_Time;
}
istream& operator>>(istream& in , emp& e) {
    in>>e.empid>>e.name>>e.arr_Time;return in;
}
ostream& operator<<(ostream& out, emp& e) {
    out<<e.empid<<e.arr_Time<<e.name<<endl;return out;
}
istream& operator>>(istream& in , UDtime& u) {
    in>>u;return in;
}
ostream& operator<<(ostream& out, UDtime& u) {
    out<<u<<endl;return out;
}
int main()
{
	int num;
	emp e[20];
	UDtime exp_Arr_Time;
	UDtime a_Time;
	cin>>num;
	for(int k=0;k<num;k++)
	cin>>e[k];
	cin>>exp_Arr_Time;	
	for(int j=0;j<num;j++)
	{
	a_Time = e[j].get_Time();
	if(exp_Arr_Time<a_Time)
	cout<<e[j];
	}
}