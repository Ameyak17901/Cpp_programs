#include<iostream>
using namespace std;
 
void ustrcpy(char*,char*);
int main()
{
	char a[5]="Pune";
	char b[5];
	
	ustrcpy(b,a);
	cout<<"Target string is "<<b;
}

void ustrcpy(char *p,char *q)
{
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
}
