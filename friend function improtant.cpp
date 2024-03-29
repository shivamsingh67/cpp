//operator overloading simple function
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		void set(int x, int y)
		{
			real=x; img=y;
		}
	
		//this wiil be the following code but in case if we want to declear it as friend function then it's prototype will change
     
		complex operator+( complex &c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
		return(temp);
		}
		void show()
		{
			cout<<real<<"+i"<<img<<endl;
		}
};
int main()
{
	complex c1,c2;
	c1.set(10,5),c2.set(2,4);
	complex c3=c1+c2;;
//c1 has call the + operator function and c2 has pass as an argument and all of thease are assined to c3    we can c3=c1.operator+(c2)
	//in case if we want to declear ad friend function then both of this argument will pass as argument
	c3.show();
	
}




/*

//operator overloading through friend function
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		void set(int x, int y)
		{
			real=x; img=y;
		}
		void show()    
    {
     cout<<real<<"+i"<<img;
    }
friend complex operator +(complex &,complex &);

};
complex operator+(complex &X,complex &Y)
{
	complex temp;
	temp.real=X.real+Y.real;
	temp.img=Y.img+Y.img;
	return(temp);
	
}
int main()
{
	complex c1,c2;
	c1.set(3,4),c2.set(5,4);
	complex c3=c1+c2;
	//in case if we want to declear ad friend fuinction then both of this argument will pass as argument to the function of the friend c3=operator+(c1,c2);
	c3.show();
	
}
/*in unary-1 in binary-2
note-if we want to overload a binARY operator then 1 argumen is pass through it if it is a member function and if we want it as friend function then 1 more argu,ent will pass through it

and in the unary operator we don't have to pass the argument b.coz here caller object is pass as 1 necessry argument but if we want to defined 
it as friend function then we have to pass 1 argument through it

imp*-in friend function we have to pass one more argument in compare to the simple function
*/
