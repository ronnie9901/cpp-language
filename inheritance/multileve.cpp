
#include<iostream>
using namespace std;

class P
{  
    protected:
	float n ,f ,k;
	
};
class Q :public P
{   
    public:
    void Fahrenheit ()
    {
        cout<< " enter the fahrinheit";
        cin>>n;
        
        f=(1.8*n)+32;
	}
};
class R  :public Q
{   
   public:
   void kelvin()
   {
   	    k=n+273;
   	    
   }
  
   void output( )
   {
  	 cout<<" fahrinheit"<<f;
  	 cout<<" kelvin"<<k;
  }
   
};

int main()
{
  R a1;
  
    a1.Fahrenheit();
    a1.kelvin();
    a1.output();

 	
	
}


