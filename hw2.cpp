#include<iostream>

using namespace std;
int main()
{
	int num1,num2,sum,sub,mul,mod;
	float div;
	 cout<<"Enter first num:";
	 cin>>num1;
	 cout<<"Enter second num:";
	 cin>>num2;
   	 sum=num1+num2;
	 sub=num1-num2;
     mul=num1*num2;
	 div=(float)num1/num2;
	 mod=num1%num2;
	
	cout<<"The sum is: "<<sum<<endl;
	cout<<"The sub is: "<<sub<<endl;
	cout<<"The mul is: "<<mul<<endl;
	cout<<"The div is: "<<div<<endl;
	cout<<"The mod is: "<<mod<<endl;
	
	return 0;
}
