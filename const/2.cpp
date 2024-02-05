#include<iostream>
class food 
{
	int id ,rating,staffq,year ;
	string name,location,type; 
	
	food()
	{
		cout<<" enter the details";
	
		cout<<" id ";
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
	class food f[2];
	
	int x=1
	for(i=0;i<2;i++)
	{
		f[i].output();
		cout<<x;
		x++;
		
	}
	
	
}
