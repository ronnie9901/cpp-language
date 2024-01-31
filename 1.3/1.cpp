//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college

#include<iostream>
using namespace std;

class student
{
	int id,age;
	string name,course,city,email,college,line;
	
	public:
	void input( )
	{
		cout<< " enter the detail"<<endl ;
		
		cout<<" enter the id";
		cin>>id;
		
		getline(cin,line);
		cout<<" enter the id";
		getline(cin,name);
	
		
		cout<<" enter the age";
		cin>>age;
		
	    getline(cin,line);
		cout<<" enter the course";
		cin>>course;
		
		
		getline(cin,line);
		cout<<" enter the city";
		cin>>city;
		
		getline(cin,line);
		cout<<" enter the email";
		cin>>email;
		
		getline(cin,line);
		cout<<" enter the college";
		cin>>college;

	}
	void output()
	{
		cout<<" id "<<id<<endl;
		cout<<" name "<<name<<endl;
		cout<<" age"<<age<<endl;
		cout<<" course "<<course<<endl;
		cout<<" city "<<city<<endl;
		cout<<" email"<<email<<endl;
		cout<<" college "<<college<<endl;
		
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



