//fibonocci numbers

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<"1 1 ";
	int a=1, b=1, c=0;
	for(int i=2; i<=n; i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	return 0;
}
