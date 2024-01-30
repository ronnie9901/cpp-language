#include<iostream>
using namespace std;
 class erp
{
	public:
	int f1,i1,f2,i2,t;
	void input( )
	{
			
	cout<<" enter the feet";
	cin>>f1;
	cout<<" enter the feet";
	cin>>i1;
	
	cout << endl<<endl;
	
	cout<<" enter the feet";
	cin>>f2;
	cout<<" enter the feet";
	cin>>i2;
	
	
	f1=f1+(i1/12);
	i1=(i1%12);
	
	f2=f2+(i2/12);
	i2=(i2%12);
	
	cout << endl<<endl;
	
	cout<<" feet "<< f1+f2<<"inche "<<i1+i2;
	
	}
	
};
int main()
{
	class erp m[1];
	int i;

		m[1].input();
		
	
	
}
