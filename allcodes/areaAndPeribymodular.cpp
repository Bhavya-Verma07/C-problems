#include<iostream>
using namespace std;
int perimeter(int x, int y)
{
	int p=2*(x+y);
	return(p);
}
int area(int x,int y)
{
	int a=(x*y);
	return(a);
}
int main()
{
int l,b;
cout<<"enter length and breadth";
cin>>l>>b;
cout<<"perimeter is "<<perimeter(l,b)<<" "<<"and area is "<<area(l,b)<<endl;
return 0;
}

