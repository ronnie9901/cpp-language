
#include<iostream>
using namespace std;

class R
{  
    protected:
	int r ,r1,r2;
	public:
	void sbi ()
	{
		cout<< "sbi intrest rate"<<endl;
		cin>>r;
    }
    void bob ()
	{
		cout<< "bob intrest rate"<<endl;
		cin>>r1;
    }
    void icici ()
	{
		cout<< "icici intrest rate"<<endl;
		cin>>r2;
    }
	
};
class S:public R
{      
        public:
        	
        	void get()
        	{
        		sbi();
        		cout<< " sbi "<<r<<endl;
        	}
};
class B :public R
{      
        public:
        
        	void get1()
        	{
        		bob();
        		cout<< " bob "<<r1<<endl;
			}
};
class I:public R
{
    public:
    
    void get2()
    {
    	icici();
    	cout<< " icici" <<r2<<endl;
	}
   
 	
};

int main()
{

  S s1;
  s1.get();
  B s2;
  s2.get1();
  I s3;
  s3.get2();
  
  
	
}



