#include<iostream>
using namespace std;
 class car
{
	public:
     int id,re_year;
     string color,model,company_name,line;
     
     
     void input()
    
     {
     
     	
	  cout<< " enter the id";
	  cin>>id;
	  getline(cin,line);
	   	
   	  cout<< " enter the color";
   	  getline(cin,color);
   	  getline(cin,line);
   	
   	  
   	  cout<< " enter the model";
   	  getline(cin,model);
   	  getline(cin,line);
   	  
   
   	  
   	  cout<< " enter the compay name";
   	  getline(cin,company_name);
   	  getline(cin,line);
   	  
   	  cout<< " enter the re year";
	  cin>>re_year;
   
  
   
   	  cout<< "id"<<id<<endl;
   	  cout<< "color"<<color<<endl;
   	  cout<<"model"<<model<<endl;
   	  cout<< " company name"<<company_name<<endl;
   	  cout<< "re year"<<re_year<<endl;
   	  
}
};


int main()
{
	int i;
   class car m[4];
   
   for(i=0;i<4;i++)
   {
   	  m[i].input();
   }
   
}


