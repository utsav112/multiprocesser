#include<iostream>
#include<string.h>
using namespace std;

class Royal{
	public :
		void print(){
			cout<<"Royal Engine Bullet"<<endl;
		}
};

class Poor : public Royal
{
	public:
		void print()
		{
			cout<<"Poor Not Aford Royal Engine Bullet ;"<<endl;
		}
};

int main()
{
	Poor p;
	p.Royal :: print();
	p.print();
	return 0;
}
