#include<iostream>
using namespace std;
int main()
{	int t,k;
	scanf("%d",&t);
	while(t--){int m=64;

scanf("%d",&k);
cout<<"O";
k--;
m--;
while(k--)
{	if(m==8||m==16||m==24||m==32||m==40||m==48||m==56)
{
	cout<<"\n";
	m--;
	cout<<".";
}
}
while(m>0)
{if(m!=8||m!=16||m!=24||m!=32||m!=40||m!=48||m!=56)
	cout<<"\n";
	m--;
	cout<<"X";
}
cout<<"\n";
}
	return 0;
}
