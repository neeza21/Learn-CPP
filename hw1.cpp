#include<iostream>

using namespace std;
int main(){
	float length,width,height,v;
	cout<<"Enter length of box=";
	cin>>length;
	cout<<"Enter width of box=";
	cin>>width;
	cout<<"Enter height of box=";
	cin>>height;
	v=length*width*height;
	
	cout<<"Volume of box is="<<v;
	
	return 0;
}
