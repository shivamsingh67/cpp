#include<iostream>
using namespace std;
int main()
{
	int n,i,f=0,s=1,res;
	cin>>n;
	for(i=0;i<n;i++)
	{
	if(i<=1)
	res=1;
	else

	{
	res=f+s;
	f=s;
	s=res;
}
cout<<res<<" ";
}
}
