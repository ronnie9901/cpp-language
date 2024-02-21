#include<iostream>
using namespace std;
 
class shape
{
	protected:
	int area,redius,l,w,b,h;
	string color;
	public:
	virtual void cal()=0;
	
};
class circle:public shape
{
	public:
	void cal()
	{
		cout<<"enter redius:" ;
		cin>>redius;
		
			int pie =3.14;
		area=pie*redius*redius;
		cout<<"circle area :"<<area<<endl<<endl;
	    cout<<endl;
	}
	
};

class rectangle: public shape
{
	public:
	void cal( )
	{
		cout<<" rectangle "<<endl;
		cout<<" length:";
		cin>>l;
		cout<<"width:";
		cin>>w;
		
		area=l*w;
		cout<<" area rectangle :"<<area <<endl;
	}
	
};
class tringle :public shape 
{
	public:
	void cal()
	{
	  cout<<"  tringle :"<<endl;
	  cout<<" enter  base ";
	  cin>>b;
	  cout<<" enter lenth :";
	  cin>>h;
	  
	  area=(b*h)/2;
		
	  cout<<"  area tringle : "<<area;	
	} 

};
int main()
{
	circle c1;
	c1.cal();
	
	
	
   rectangle r1;
   r1.cal();
   
   tringle t1;
   t1.cal();
   
   
   
   	
}
