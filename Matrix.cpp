#include<iostream>
using namespace std;

int main()
{
	int a[3][4];
	int i,j;
	
    cout<<"Enter the numbers"<<endl;
		for(i=0;i<3;i++)
		{
		
		for(j=0;j<4;j++)
		{
			cout<<"Enter the elements:";
			cin>>a[i] [j];
		}
	    }
	cout<<"The matrix is..."<<endl;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
		{
			cout<<a[i] [j]<<" ";
		}
		cout<<endl;
	}
	
	
}
