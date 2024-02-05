#include<iostream>
using namespace std;
class food 
{
	int id ,rating,staffq,year ;
	static int i;
	string name,location,type; 
	public:
	
	food()
	{
	   cout<< " welcome to my cafe"<<endl;
	}
	 void input()
	 {
	 	cout<<" enter the details : "<<x<<endl;
	 	cin>>id;
		cin.ignore();
		
		cout<< " name ";
		getline(cin,name);
		
		cout<<" staff quantity ";
		cin>>id;
		cin.ignore();
		
		cout<<" rating ";
		cin>>id;
		cin.ignore();
		
		cout<<" year ";
		cin>>id;
		cin.ignore();
		
		cout<< " location ";
		getline(cin,location);
		
		cout<< " type ";
		getline(cin,type);
	 }
	
	void output()
	{   
	    cout<<"ente the details"<<endl;
	    cout<< "-------------------------"<<endl;
		cout<< " enter id:"<<id<<endl;
		cout<< " enter name:"<<name<<endl;
		cout<< " enter rating:"<<rating<<endl;
		cout<< " enter staffq:"<<staffq<<endl;
		cout<< " enter year:"<<year<<endl;
		cout<< " enter location:"<<location<<endl;
		cout<< " enter type:"<<type<<endl;
	}
};
main()
{
	class food f;

		f.input();
		f.output();
	
}

