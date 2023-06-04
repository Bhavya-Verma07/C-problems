//print smallest divisor of a number

#include<iostream>
using namespace std;

int smallestdivisor(int x){
	for(int i=2; i<=x; i++){
	if(x%i==0){
	cout<<"Smallest divisor is "<<i;
		break;
		}
	}
	
}
int main(){
	cout<<"enter a number";
	int n;
	cin>>n;
smallestdivisor(n);
	return 0;
}
