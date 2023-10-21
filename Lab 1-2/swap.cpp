#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	cout<<"Before swapping : "<< a <<"\t"<< b <<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping : "<< a <<"\t"<< b <<endl;
	
}
