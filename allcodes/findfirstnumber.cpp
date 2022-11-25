//finding first digit of a number


#include<iostream>
using namespace std;

int firstdigit(int x){
	while(x>10)
	{
		x= x/10;
	}
	return x;
}

int main()
{
	int n;
	cin>>n;
	cout<<firstdigit(n);
	return 0;
}
