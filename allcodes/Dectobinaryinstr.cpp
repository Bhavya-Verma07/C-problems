//decimal to binary 
#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

string decToBinary(int n){
	string s ="";
	while(n>0){
		int t= n%2;
		s= s+to_string(t);
		n=n/2;
	}
	reverse(s.begin(), s.end());
	return s;
}


int main(){
	int n;
	cin>>n;
	string ans= decToBinary(n);
	cout<<ans;
	return 0;
}
