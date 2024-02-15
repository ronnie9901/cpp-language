#include<iostream>
using namespace std;

class message
{
	string msg;
	
	public:
		
	 message( string msg)
	{
		 this->msg=msg;
		 
	}
	 void printf()
	 {
	 	 cout<<msg<<endl;
	 }
	 void printf(string newmsg)
	 {
	 	 cout<<msg  <<" "<<newmsg;
	 }	
	
};
int main()
{
	message m1( " hello");
	
	m1.printf();
	m1.printf("  world");
	return 0;
}
