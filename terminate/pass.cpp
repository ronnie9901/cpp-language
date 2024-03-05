#include<iostream>
using namespace std;

class Try
{
	int age;
	float a,b;
	string password;
	
	public :
		void checkage()
		{
			
			cout << "Enter  age : ";
			cin >> age;
			
			try
			{
				if(age < 18)
				{
					throw 0;	
				}
				else
				{
					cout << endl << "You Are Eligible for Vot";	
				}	
			}
			catch(int age)
			{
				cout << endl << "You Are Not Eligible for Vot";	
			}	
		}	
		void checkdivision()
		{
		
			cout << "Enter  first value : ";
			cin >> a;
			
			cout << "Enter  Second value : ";
			cin >> b;
			
			try
			{
				if(b == 0)
				{
					throw b;	
				}
				else
				{
					cout << endl << "Division is : " << a/b;
				}	
			}
			catch(float b)
			{
				cout << endl << " Can't divide by " << b;	
			}
			
		}
		void checkpassword()
		{
			int check=0;
			cout << endl << endl << "--------Check Password--------" << endl;
			cout << "Enter the Password : ";
			cin >> password;
			
			for(int i=0; i<password.length(); i++)
			{
				if(password[i] >= 'A' && password[i] <= 'Z')
				{
					check = 1;
					break;
				}
			}
			
			try
			{
				if(check == 1)
				{
					cout << endl <<  "Password is Valid" << endl;	
				}
				else
				{
					throw password;	
				}
			}
			catch(string password)
			{
				cout << endl << password << " This Password is wrong  min 1 cap latters ";	
			}	
		}
};

int main()
{
	Try t1;
	
	t1.checkage();
	t1.checkdivision();
	t1.checkpassword();

	
	return 0;
}



