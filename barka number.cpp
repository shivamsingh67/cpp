#include<iostream>
using namespace std;
int main()
{
	int n,i,u,a[1000],*o;
	o=a;
	cin>>n;
	cout<<"\nenter the value= ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nYour entered value is= ";
		for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		if(*o>=a[i+1])
		u=*o;
	return u;
		o++;
		
	}
	cout<<"the bigger number is= "<<u;
	
}
