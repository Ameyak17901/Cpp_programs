#include<iostream>
using namespace std;
int ustrlen(char*);
int main()
{
	int len;
	char a[10];
	
	printf("Enter the String \n");
	cin >> a;
	
	len=ustrlen(a);
	cout << len;
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
