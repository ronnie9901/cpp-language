//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)

#include<iostream>
using namespace std;

class student
{
	int id,age,simcard;
	double mobile;
	string name,city,brandname,line;
	
	public:
	void input( )
	{
		cout<< " enter the detail"<<endl ;
		
		cout<<" enter the id";
		cin>>id;
		
		getline(cin,line);
		cout<<" enter the name";
		getline(cin,name);
	
		
		cout<<" enter the age";
		cin>>age;
		
		getline(cin,line);
		cout<<" enter the city";
		cin>>city;
		

		cout<<" enter the mobile no:";
		cin>>mobile;
		
		cout<<" enter the simcard";
		cin>>simcard;
		
		getline(cin,line);
		cout<<" enter the brandname";
		cin>>brandname;

	}
	void output()
	{
		cout<<" id "<<id<<endl;
		cout<<" name "<<name<<endl;
		cout<<" age"<<age<<endl;
		cout<<" city "<<city<<endl;
		cout<<" mobile"<<mobile<<endl;
		cout<<" college "<<simcard<<endl;
		cout<<" college "<<brandname<<endl;
		
	}
	
};
int main()
{ 
    class student s[5];
    int i,x=1;
    for(i=0;i<5;i++)
    {
    	s[i].input();
    	s[i].output();
    	cout<<x;
    	x++;
    	
	}
    
    
}



