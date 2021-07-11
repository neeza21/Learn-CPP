#include<iostream>
using namespace std;

int main(){
	int odd_sum=0,even_sum=0, i;
	for(i=1;i<=100;i++){
		if(i%2==0)
		even_sum=even_sum+i;
		else
		odd_sum=odd_sum+i;
	}
	cout<<"The sum of even number is: "<<even_sum<<endl;
	cout<<"The sum of odd number is:"<<odd_sum<<endl;
	
	return 0;
}
