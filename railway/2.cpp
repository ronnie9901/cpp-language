
#include<iostream>
using namespace std;

class super
{
	int n,Price,Quantity;
	string item_name;
    static int Discount;
	
	public:
	super()
	{
		cout<<" welcome surat";
	}
	int item_no;
	void input()
	{
		cout << "Enter item no : ";
		cin >> item_no;
		cin.ignore();
		
		cout << "Enter item name : ";
		getline(cin,item_name);
		
		cout << "Enter Quantity : ";
	    cin>>Quantity;
	    cin.ignore();
		
	    cout << "Enter Price : ";
		cin >> Price;
		cin.ignore();
		
		cout << "Enter Discount : ";
		cin >> Discount;
		cin.ignore();
	
	}

	void output()
	{
		cout<<"item no:"<< item_no<<endl;
		cout<<"item name:"<< item_name<<endl;
		cout<<"quantity:"<<Quantity <<endl;
		cout<<"price :"<< Price<<endl;
		cout<<" discount:"<< Discount<<endl;
		
	}
		
	
};

    int super ::Discount = 18;
 main()
{
   
     int i ,n;
     cin>>n;
     
     super r[n];
     for(i=0;i<n;i++)
     {
     	r[i].input();
	 }
	 
	 	int t;
		cout <<" enter the no" <<endl;
		cin>>t;
		
	 for(i=0;i<n;i++)
     {
         if(t==r[i].item_no)
         {
         	r[i].output();
		 }
	 }
	
}







