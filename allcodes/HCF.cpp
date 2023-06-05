//greatest common divisor of a number of HCF

#include<iostream>
using namespace std;

int min(int a, int b){
	if(a<b){
		return a;
	}
	else if(b<a)
	return b;
	else
	return a;
}
int main(){
	int a,b;
	cin>>a>>b;
	int x= min(a,b);
	int ans;
	for(int i=1; i<=x; i++){
		if(a%i==0 && b%i==0){
			ans = i;
		}
	}
	cout<<ans;
	return 0;
}
