
#include<iostream>
using namespace std;

class railway
{
	int n;
	string train_name,source,destination,train_time;

	
	public:
	int train_no;
	void input()
	{
		cout << "Enter train no : ";
		cin >> train_no;
		cin.ignore();
		
		cout << "Enter train name : ";
		getline(cin,train_name);
		
		cout << "Enter source : ";
		getline(cin,source);
		
		cout << "Enter destination : ";
		getline(cin,destination);
		
		cout << "Enter train time : ";
		getline(cin,train_time);
	}

	void output()
	{
		cout<<"train no:"<< train_no<<endl;
		cout<<"train name:"<< train_name<<endl;
		cout<<"source:"<< source<<endl;
		cout<<"destination :"<< destination<<endl;
		cout<<"train time:"<< train_time<<endl;
		
	}
		
	raiway()
	{
		cout<<" welcome surat";
	}
		
};
 main()
{
		
		
		
		railway r;
		r.input();

		cout<<"-------------------"<<endl;
		
		railway r1;
		r1.input();

		cout<<"-------------------"<<endl;
		
		railway r2;
		r2.input();
		
		cout<<"-------------------"<<endl;
		
		int t;
		cout <<" enter the details" <<endl;
		cin>>t;
		
		
		if(r.train_no == t)
		{
		    r.output();
		}
		
		if(r1.train_no == t)
		{
		     r1.output();
		}
		if(r2.train_no == t)
		{
		   r2.output();
		}
}






