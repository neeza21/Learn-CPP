#include<iostream>
using namespace std;

struct person
{
	int id;
	char name[50];
	float salary;
}p;

void display(struct person);
int main()
{
	cout<<"Enter the ID:";
	cin>>p.id;
	cout<<"Enter the Full name:";
	cin.get(p.name, 50);
	cout<<"Enter Salary:";
	cin>>p.salary;
	
	
	display(p);
	
	return 0;
}

void display(struct person p)
{
	cout<<"Displaying Information"<<endl;
	cout<<"ID:"<<p.id<<endl;
	cout<<"Name:"<<p.name<<endl;
	cout<<"Salary:"<<p.salary;
}
