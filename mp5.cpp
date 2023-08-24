#include<iostream>
#include<string.h>
using namespace std;

class Prince{
	public :
	 int a,b;
	void set(int a, int b){
		this->a = a;
		this->b = b;
	}
	void print()
	{
			cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
	}
	Prince operator+(Prince n)
	{
		Prince p;
		p.a = this->a + n.a;
		p.b = this->b + n.b;
		return p;
	}
};
int main()
{
	Prince p,p1,p2;
	
	p.set(10,20);
	p.print();
	p1.set(15,25);
	p1.print();
	cout<<"==== Sum A + A & B + B ====="<<endl;
	p2 = p + p1;
	p2.print();
	
	
	return 0;
}
