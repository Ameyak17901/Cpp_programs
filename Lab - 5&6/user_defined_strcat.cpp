#include<iostream>
using namespace std;
 
void ustrcat(char*,char*);
int main()
{
	char a[6]="Ameya";
	char b[6]="Vidhi";
	
	ustrcat(b,a);
	cout<<"Target string is "<<b;
}

void ustrcat(char *p,char *q)
{
	while(*p!='\0')
	{
		p++;	
	}
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
}
