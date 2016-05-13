#include <iostream>
#include"area.h"
using namespace std;
int main()
{
	double area(double);
	cout<<"Please enter the radius of the circle:\n";
	double r,s;
	cin>>r;
	s=area(r);
	cout<<s<<endl;
	return 0;
}