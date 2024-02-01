//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
using namespace std;
class hotel
{
	int id,sq,rq,rating;
	string type,lacation;
	static int year;
	static string name;
	public:
		
	void input()
	{
		cout<< " enter the details "<<endl;
		
		cout<<" enter id";
		cin>>id;
		cin.ignore();
		
		cout<<" enter type hotel or motel";
		getline(cin,type);
		
		cout<<" enter rating";
		cin>>rating;
		cin.ignore();
		
		cout<<" enter location";
	    getline(cin,lacation);
	   
	   	cout<<" enter staff quantity";
		cin>>sq;
		cin.ignore();
		
		cout<<" enter room quantity";
		cin>>rq;
		cin.ignore();

	}
	void output()
	{
		cout<<"-----------------------"<<endl;
		cout<<" id "<<id<<endl;
		cout<<" name "<<name<<endl;
		cout<<" type "<<type<<endl;
		cout<<" rating "<<rating<<endl;
		cout<<" year "<<year<<endl;
		cout<<" staff q"<<sq<<endl;
		cout<<" room q"<<sq<<endl;
		
	}
};
string hotel::name="rohan";
int  hotel::year=1990;
main()
{
	class hotel h[50];

	int i,x=1;
	
	for(i=0;i<3;i++)
	{
		h[i].input();
		cout<<x;
		x++;
		
	}
	for(i=0;i<3;i++)
	{
		h[i].output();
	}
}
