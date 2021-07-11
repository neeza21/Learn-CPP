#include<iostream>
using namespace std;

class RectangleTwo;
class RectangleOne
{
 private:
 int L,B;
 public:
 RectangleOne(int l, int b)	
 {
 	L=l;
 	B=b;
 }
 friend void Sum(RectangleOne,RectangleTwo);
};

class RectangleTwo
{
	private:
	 int L,B;
	 public:
	 	RectangleTwo(int l,int b)
     	{
	 		L=l;
	 		B=b;
	   }
  friend void Sum(RectangleOne, RectangleTwo);
};
void Sum(RectangleOne R1,RectangleTwo R2)
{
	cout<<"\n\tLength\tBreadth";
	cout<<"\n Rectangle 1: "<<R1.L<<"\t"<<R1.B;
	cout<<"\n Rectangle 2: "<<R2.L<<"\t"<<R2.B;
	
	cout<<"\n-------------------------";
	cout<<"\n\t Sum: "<<R1.L+R2.L<<"\t"<<R1.B+R2.B;
	cout<<"\n-------------------------";
}

int main()
{
	RectangleOne Rec1(5,4);
	RectangleTwo Rec2(7,4);
	
	Sum(Rec1,Rec2);
	
	return 0;
}

