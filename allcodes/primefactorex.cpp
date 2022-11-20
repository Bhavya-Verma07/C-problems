//PRIME FACTORS

#include<iostream>
using namespace std;
	int isPrime(int x)
	{
		
		for(int i=2; i<x; i++)
		{	
		if(x%i==0)
		{
		 return false;	
		}
		else
		return true;
	}
	}
	int main()
   {
	int n;
	cin>>n;
	for(int y=2; y<=n; y++)
	if(isPrime(y))
	{
	int a=y;
	while(n%y==0)
	{
		cout<<a<<" ";
		y = a*y;
	}
  }
  return 0;
}
