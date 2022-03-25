#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

class city{
	protected:
		char *name;
		int len;
		public:
			city()
			{
				len=0;
				name=new char[len+1];
			}
			void getname(void)
			{

				char *s;
				s=new char[40];//dymacally memory allocation inside the s chsaracter
				cout<<"enter the city name\n";
				gets(s);//taking the  value
				len=strlen(s);
				name=new char[len+1];
				strcpy(name,s);
			}
			
			void show()
			{
				cout<<name<<"\n";
			}
};
int main()
{
	city *obj[20];//array of the 20 pointer
	int n=1;
	int opt;//for taking the more option
	do{
		obj[n]=new city;//create new city
		obj[n]->getname();
		n++;
		cout<<"do you want to enter the new name?\n";
		cout<<"enter the 1 for yes and 0 for no\n";
		cin>>opt;
	}while(opt);
	
		cout<<"\n\n";
		for(int i=1;i<=n;i++)
		{
			obj[i]->show();
		}
	return 0;
	
}
