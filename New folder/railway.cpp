#include<iostream>
using namespace std;

class railway
{
	int train_no;
	string train_name,source,destination,train_time;
	
	void record()
	{
		cout<<"train no:"<< train_no<<endl;
		cout<<"train name:"<< train_name<<endl;
		cout<<"source:"<< source<<endl;
		cout<<"destination :"<< destination<<endl;
		cout<<"train time:"<< train_time<<endl;
		
	}
	
	void search()
	{
		cout<< " enter the train no ";
		cin>>train_no;
		cout<<"train no:"<< train_no<<endl;
		cout<<"train name:"<< train_name<<endl;
		cout<<"source:"<< source<<endl;
		cout<<"destination :"<< destination<<endl;
		cout<<"train time:"<< train_time<<endl;
		
	}
	public:
		
		void choise
		{
			while(1)
			{
				int n;
				cin>>n;
				
				cout<< " enter no (1-4)";
				cout<<"add record";
				cout<< " train no ";
				cout<<"exit";
				
				
			}
			(n==4)
			{
			    cout<<" thank you  ";
				break;	
			}
			
			switch(n)
			{
			      case 1:input();
				  break;
				  case 2:record();	
				  break;
				  case 3: search();
				  break;
				  default  : cout<<" error";
				  
			}
			
			
		}
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
		

		
	
};
main()
{
	int n;
	cout <<" enter the details";
	cin>>n;
	
	
	
}

