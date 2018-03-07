#include<iostream>
using namespace std;

int main()
{
int array[10];
int sum=0;
int x;

cout<<"Enter the 10 numbers:"<<endl;

for(x=0;x<10;x++)
{
	cin>>array[x];
	
}
for(x=0;x<10;x++)
{
	
	sum+=array[x];
}


cout<<"the sum of the 10 numbers : "<<sum<<endl;

std::cin.get();
}
