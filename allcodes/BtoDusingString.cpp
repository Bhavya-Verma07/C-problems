//binary to decimal conversion using strings

#include<bits/stdc++.h >
using namespace std;

int main(){
	string s;
	cout<<"enter binary number ";
	cin>>s;
	cout<<endl;
	int dec=0;
	int base=1;
	int l= s.length()-1;
	for(int i=0; i<=l; i++){
		dec = dec+int(s[l-i]-'0')*base;
		base= base*2;
	}
	cout<<"decimal equivalent is "<<dec;
	return 0;
}
