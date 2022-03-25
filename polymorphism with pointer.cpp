#include<iostream>
using namespace std;
class base1
{
	public:
		void display()
		{
			cout<<"one\n";
		}
};
class base2 : public base1
{
	public:
		void display()
		{
			cout<<"two\n";
		}
};
class base3 :public base2
{
	public:
	void display()
	{
		cout<<"three\n";
	}
};
int main()
{
base1 ob1;
base2 ob2;
base3 ob3;
base1 *p[3];
p[0]=&ob1;
p[1]=&ob2;
p[2]=&ob3;
for(int i=0;i<=2;i++)
{
	p[i]->display();
	return 0;
	}	
}
