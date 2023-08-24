#include<iostream>
#include<string.h>
using namespace std;

class Open
{
	public:
		int p;
		void setter(int p)
		{
			this->p = p;
		}
		void getter()
		{
			cout<<"P = "<<p<<endl;
		}
		operator++(int)
		{
			this->p++;
		}
		operator--(int)
		{
			this->p--;
		}
		
};
int main()
{
	Open o;
	o.setter(9);
	o.getter();
	o++;
	o.getter();
	o--;
	o.getter();
	return 0;
}
