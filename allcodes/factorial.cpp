//factorial of a number

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x=n;
	for(int i=1; i<n; i++){
	x=x*i;
	}
	cout<<x;
	return 0;
}
