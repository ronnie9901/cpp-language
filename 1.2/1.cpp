#include<iostream>
using namespace std;
 class emp
{
	public:
     int id,salary,exp,age;
     string name,role,city,company_name,line;
     
     
     void input()
    
     {
  
      cout<<"enter deatail of emp"<<endl;
     
     	 
	  cout<< " enter the id";
	  cin>>id;
	  getline(cin,line);
	   	 
   	  cout<< " enter the name";
   	  getline(cin,name);
   	  getline(cin,line);
   	  
   	  cout<< " enter the age";
   	  cin>>age;
   	  
   	  cout<< " enter the role";
   	  getline(cin,role);
   	  getline(cin,line);
   	  
   	  cout<< " enter the salary";
   	  cin>>salary;
   	  
   	  cout<< " enter the city";
   	  getline(cin,city);
   	  getline(cin,line);
   	  
   	  cout<< " enter the exp";
   	  cin>>exp;
   	  
   	  cout<< " enter the compay name";
   	  getline(cin,company_name);
   	  getline(cin,line);
   
  
   
   	  cout<< "id"<<id<<endl;
   	  cout<< "name"<<name<<endl;
   	  cout<< "age"<<age<<endl;
   	  cout<<"role"<<role<<endl;
   	  cout<< "salary"<<salary<<endl;
   	  cout<< "city"<<city<<endl;
   	  cout<< "exp"<<exp<<endl;
   	  cout<< " company name"<<company_name<<endl ;
   	  
}
};


int main()
{
	int i,x=1;
   class emp m[5];
   
   for(i=0;i<5;i++)
   {
   	  m[i].input();
   	  cout<<x;
   	  x++;
   }
   
}

