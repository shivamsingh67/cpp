#include<bits/stdc++.h>
using namespace std;
class sample
{
	int a;
public:
void gdata();
void display();

};
void sample::gdata()
{
	cout<<"Enter any number whatever you want in the 0,1,-1\n";
cin>>a;

}
void sample::display()
{
	int n;
	char ch;string str;
	try
	{
		if(a==0)
		throw n;
		else if(a==1)
		throw ch;
		else if(a==-1)
		throw str;
	}
	catch(int n)
	{
		cout<<"Exceptuino integer\n";
	}
	catch(char ch)
	{
		cout<<"\nException character\n";
	}
	catch(string str)
	{
		cout<<"\nException string\n";
	}

}
class pl : public sample
{
    public:

};
int main()
{
 pl *ob;
 ob->display();
 return 0;
}
