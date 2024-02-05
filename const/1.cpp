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

class Diamond
{
	int id,staffq,revenue,raw_diamonds,export_diamonds;
	string comp_name,ceo;
	
	public:
	Diamond(int id,int staffq,int revenue,int raw_diamonds,int export_diamonds,string comp_name,string ceo)
		{
			this ->id=id;
			this ->staffq=staffq;
			this ->revenue=revenue;
			this ->raw_diamonds=raw_diamonds;
			this ->export_diamonds=export_diamonds;
			this ->comp_name=comp_name;
			this ->ceo=ceo;
		}
	void output(int x)
	{
		cout<<"-----------------------"<<endl;
		cout<<"this are the detail : "<<x<<" "<<endl;
		cout<<" id "<<id<<endl;
		cout<<" name "<<comp_name<<endl;
		cout<<" revenue"<<revenue<<endl;
		cout<<" raw_diamonds "<<raw_diamonds<<endl;
		cout<<" export_diamonds "<<export_diamonds<<endl;
		cout<<" ceo"<<ceo<<endl;
		cout<<" staffq "<<staffq<<endl;
		
	}
	
};
int main()
{ 
	int id,staffq,revenue,raw_diamonds,export_diamonds,i;
	string comp_name,ceo;
    Diamond s[2]=Diamond( id, staffq, revenue, raw_diamonds, export_diamonds, comp_name, ceo);
 
	
	for(i=0;i<2;i++)
	{

		
		cout<<" enter id : ";
		cin>>id;
		cin.ignore();
		
		cout<<" enter camp name : ";
		getline(cin,comp_name);
		
		cout<<" enter revenue : ";
		cin>>revenue;
		cin.ignore();
	   
	   	cout<<" enter staff quantity : ";
		cin>>staffq;
		cin.ignore();
		
		cout<<" enter raw_diamonds : ";
		cin>>raw_diamonds;
		cin.ignore();
		
		cout<<" enter export_diamonds : ";
		cin>>export_diamonds;
		cin.ignore();
		
		cout<<" enter  ceo : ";
		getline(cin,ceo);
		
		
		s[i]=Diamond( id, staffq, revenue, raw_diamonds, export_diamonds, comp_name, ceo);
		
	}
 
    int x=1;
    for(i=0;i<2;i++)
    {
    
    	s[i].output(x);
    
    	x++;
    	
	}
    
    
}




