#include<iostream>
using namespace std;
class num
{
	int a;
	
	public:
		
		void setdata()
		{
			a=0;
		}
		
		void getdata(int x)
		{
			a=x;
		}
		
	/*	friend num operator+(num &n1, num &n2)
		{
			num n3;
		    n3.a=n1.a+n2.a;
		    return n3;
		}*/
		
		num operator +(num &n1)
		{
			num n3;
			n3.a=a+n1.a;
			return n3;
		}
		
		void showdata()
		{
			cout<<"Added number is : "<<a;
		}
};

main()
{
	num n1,n2,n3;
	n1.getdata(5);
	n2.getdata(6);
	n3=n1+n2;
	n3.showdata();
}
