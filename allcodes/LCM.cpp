//LCM

#include<iostream>
using namespace std;
int max(int a, int b){
	if(a>b){
		return a;
	}
	else if(b>a){
		return b;
	}
	else 
	return a;
}
int main(){
	int a, b;
	cin>>a>>b;
	int x= max(a,b);
	int y=a*b;
	int ans=x;
	for(int i=x; i<=y; i++){
		if(i%a==0 && i%b==0){
			ans= i;
			break;
		}
		
	}
	cout<<ans;
	return 0;
}
