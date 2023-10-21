#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	char ch1, ch2;
	// sum of integers
	cout<<"Enter 2 numbers : "<<endl;
	cin>>a>>b;
	sum=a+b;
	cout<<"sum of two numbers="<<sum << endl;
	// sum of characters
	cout<<"Enter 2 characters : "<<endl;
	cin>>ch1>>ch2;
	sum=ch1+ch2;
	cout<<"sum of two characters="<<sum;
}
