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
			cout<<endl<<a;
		}
		friend operator *(num n1,num n2)
		{
			return (n1.a*n2.a);
		}
};
main()
{
	num n1,n2;
	n1.setnum();
	n1.getnum();
	n2.setnum();
	n2.getnum();
	cout<<"\nProduct is : "<<n1*n2;
	
	
}
