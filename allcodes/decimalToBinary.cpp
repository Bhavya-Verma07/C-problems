//decimal to binary conversion

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
		cin>>n;
	vector<int>v;
	int y=n;
if(y==0){
	cout<<"0";
}
	while(y>0){
		int t= y%2;
		v.push_back(t);
		y=y/2;
	}
	for(int i = v.size()-1; i>=0; i--){
		cout<<v[i];
	}
return 0;	
}
