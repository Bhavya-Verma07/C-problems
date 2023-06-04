#include <iostream>
using namespace std;

int tableof(int n)
{
	int i;
	for(i=1; i<=10; i++)
	{
		int y= (n*i);
		cout<<y<<endl;
	}

}

int main()
{
	int n;
	cin>>n;
	tableof(n);
}
