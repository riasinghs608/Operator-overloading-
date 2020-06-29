#include<iostream>
using namespace std;
class num
{
	int a,b;
	
	public :
		
		void setdata()
		{
			a=0;
			b=0;
		}
		
		friend istream& operator >> (istream &out, num &n2)
		{
			cout<<"\nEnter 2 numbers :: \n";
			cin>>n2.a>>n2.b;
		}
		
		friend ostream& operator << (ostream &out,  num &n1)
		{
			cout<<"\nNum 1 :"<<n1.a;
			cout<<"\nNum 2 :"<<n1.b;
		}
		
};
main()
{
	num n1;
	cin>>n1;
	cout<<n1;
	
return 0;
}
