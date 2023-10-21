#include<iostream>
using namespace std;


int ustrlen(char*);
void ustrrev(char*);

int main()
{
	char a[10];
	cout << "Enter the string \n";
	cin>>a;
	ustrrev(a);
	cout << a;
	return 0;
}

int ustrlen(char* p)
{
	int len = 0;
	while(*p != '\0') // will check till the pointer value =\0(Null)
	{
		len++;
		p++;
	}
	return len;
}

void ustrrev(char* p)
{
	int len = ustrlen(p);
	int i;
	for(i=0; i<len/2; i++)
	{
		char temp = *(p+i);
		*(p+i) = *(p+len-1-i);
		*(p+len-1-i) = temp;
	}
}

