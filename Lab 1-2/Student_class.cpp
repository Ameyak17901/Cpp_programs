#include<iostream>
using namespace std;
struct Student
{
	private:
		int rollno, dob, tmarks;
	public:
		void getData()
		{
			cout<<"Enter the roll no. : \n";
			cin >> rollno;
			cout<<"Enter the date of birth : \n";
			cin >> dob;
			cout<<"Enter the total marks : \n";
			cin >> tmarks;
		}
		void display()
		{
			cout << "Roll no. " << rollno << endl;
			cout << "Date of birth: " << dob << endl;
			cout << "Total marks" << tmarks << endl;
			cout<< "Roll no." << "\t" << "Date of Birth" << "\t" << "Total marks"<<endl;
			cout<<rollno<<"\t"<<dob<<"\t"<<tmarks;
			
		}
};

int main()
{
	Student s;
	s.getData();
	s.display();
}
