#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	
    cout<<"Enter first matrix elements"<<endl;
		for(i=0;i<3;i++)
		{
		
		for(j=0;j<3;j++)
		{
			cout<<"Enter the  first matrix elements:";
			cin>>a[i] [j];
		}
	    }
	cout<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the second matrix elements:";
			cin>>b[i] [j];
		}
	}
	cout<<endl;
	
	cout<<"First matrix......"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i] [j]<<"  ";
		}
		cout<<endl;
	} 
	cout<<"Second matrix....."<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i] [j]<<"  "<<endl;
		}
	
	cout<<endl;
}
	cout<<"Addition of matrix..."<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		cout<<"Sum of Two matrix is..."<<endl;
	}
	
	cout<<"Result of Addition of two matrix....."<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i] [j]<<"  ";
		}
		cout<<endl;
	}
	
	
}
