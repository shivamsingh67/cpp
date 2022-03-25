#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,*p,m, a[100];
	p=a;
	
	cout<<"enter the number you want to enter=\n ";
	cin>>n;

	cout<<"enter the nuber\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	cout<<"\nenter the number you want to search\n";
	
	cin>>m;
	for(i=0;i<n;i++)
 {
 	
 	if(m==*p)
 	
 		cout<<"yes the number is present on the"<<" "<<i<<" "<<"place\n";
	 
	 else
	 {
	 cout<<"g\na\nn\nd\nu\n\n\n\n";
}
	 p++;
 }
}
