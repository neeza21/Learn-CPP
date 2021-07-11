#include<iostream>
using namespace std;

class Sum
{
	public:
	int a;
	int b;
	int result;
	
//Default constructor declare
Sum()
{
	a=10;
	b=20;
}

};
int main(){
	Sum obj;
	int Sum=obj.a+obj.b;
	cout<<Sum;
	
}

