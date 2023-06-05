//count number of digits in the given number

#include<iostream>
using namespace std;
int main(){
	int count= 0;
	int n;
	cin>>n;
	int x=n;
	while(x>=0){	
	int y=x%10;	
	x= x/10;
	count++;	
	}
	cout<<count;
	return 0;
}
