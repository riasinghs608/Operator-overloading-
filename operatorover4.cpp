#include<iostream>
using namespace std;
class n
{
 int x;
	
	public:
		void getdata(int a)
		{
			x=a;
		}
	
		friend operator!(n &b)
		{
		
			if(b.x%2!=0)
			cout<<"\nOdd";
			else 
			cout<<"\nEven";
		}
};
int main()
{

	n num;
	num.getdata(13);
    !num;
    n z;
    z.getdata(20);
    !z;
	
	return 0;
}
