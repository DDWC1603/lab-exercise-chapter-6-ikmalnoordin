#include<iostream>

using namespace std;

int ary[]={1,2,3,4,5,6,7,8,9,10};


int n, result=0;

int main()
{

	for(n=0;n<10;n++)
	{
		result += ary[n];
	}
	cout<<result;
	

}
