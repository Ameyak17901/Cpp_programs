#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	double p,r,t;
	double CI, A;
	cout << "Enter principal, rate and time \n";
	cin >> p >> r >> t;
	A = p * pow((1+(r/100)), t);
	CI = A - p;
	cout << "Compound Interest: "<<CI;
	 
}
