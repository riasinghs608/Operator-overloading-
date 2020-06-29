#include<iostream>
using namespace std;
class num
{
	int a;
	
	public :
		
		void setnum()
		{
			a=5;
		}
		void getnum()
		{
			cout<<"\nThe number is  : "<<a;
		}
	
		 num operator = (num n)
		{
	  		a=n.a;
	  		
		}
};
main()
{
	num n1,n2;
	n1.setnum();
	n1.getnum();
    n2=n1;
	n2.getnum();
	
}


