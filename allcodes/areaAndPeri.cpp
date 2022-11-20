#include <iostream>
using namespace std;
int main()
{
	int length, breadth;
	cout<<"enter length and width ";
	cin>>length>>breadth;
	int peri=2*(length+breadth);
	int area= length*breadth;
	cout<<"area is "<<area<<endl<<"and perimeter is "<<peri<<endl;
	return 0;
}
