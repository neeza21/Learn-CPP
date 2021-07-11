#include<iostream>
using namespace std;

class baseclass
{
private:
int u;
protected:
int v;
public:
int w;
baseclass()	
{
	u=3;
	v=8;
	w=6;
}
};

class deriveclass:public baseclass
{
	//v becomes private and w becomes public members 
	//of class derive
	public:
		void show()
		{
			cout<<"u is not accessible";
			cout<<"v is"<<v<<endl;
			cout<<"w is"<<w<<endl;
		}
};

int main()
{
	deriveclass e;//object created
	e.show();
	
	return 0;
}
