// control statement
/*

1
1 0
1 0 1
1 0 1 0

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the height of triangle \n";
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		int j=1;
		while(j<=i)
		{
			if(j%2==0)
			{
				cout<<"0 ";
			}
			else
			{
				cout <<"1 ";
			}
			j++;
		}
		cout << endl;
	}
}


