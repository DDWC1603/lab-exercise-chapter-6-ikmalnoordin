#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char strpswd[80];

	cout<<"Enter password: ";
	cin>>strpswd;
	
	if((strcmp(strpswd,"maznah46"))!=0)
	{
			
		cout<<"Invalid Password "<<endl;
	}
	else
	{ 
		cout<<"Logged In "<<endl;
	}
	

	return 0;
}

