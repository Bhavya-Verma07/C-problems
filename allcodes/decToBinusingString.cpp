//decimal to binary 
#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	string bin="";
	while(n>0){
	int res= n%2;
	std::string str = std::to_string(res);
	bin= bin+ str;
	n=n/2;
	}
    string ans = reverse(bin.begin(), bin.end());
	cout<<ans;
	return 0;
}
