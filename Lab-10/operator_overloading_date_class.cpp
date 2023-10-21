// dd/mm/yy

#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		Date();
		Date(int ,int ,int );
		friend void operator+(Date&,int);
		friend void operator-(Date&,int);
		void display();
};

Date :: Date()
{
	dd = 23;
	mm = 9;
	yy = 23; 
}

Date :: Date(int d,int m,int y)
{
	dd = d;
	mm = m;
	yy = y;
}

void operator+(Date& d,int y)
{
	d.dd = d.dd + y;
	d.mm = d.mm + 1;
	d.yy = d.yy + 3;
}

void operator-(Date& d,int y)
{
	d.dd = d.dd - y;
	d.mm = d.mm - 1;
	d.yy = d.yy - 3;
}

void Date::display()
{
	cout << dd << "/" << mm << "/" << yy << endl;
}

int main()
{
	Date d(20,9,23);
	d + 2;
	d.display();
	d - 1;
	d.display();
	
}
