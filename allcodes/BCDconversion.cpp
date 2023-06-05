//binary to decimal conversion
//y = last digit
//base implies 2
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int val=0;
	int base=1;
	int x=n;
	while(x>0){
	int	y =x%10;
	val= y*base+val;
	x=x/10;
	base = base*2;
	}
	cout<<val;
	return 0;
	
		
}
