#include<bits/stdc++.h>
using namespace std;




int main(){
	string s;
	cin>>s;
	int l= s.length()-1;
    string rev;
    rev= "";
    while(l>=0)
{
	rev= rev+s[l];
	l--;
}
if(s==rev){
	cout<<"yes, palindrome";
}
else 
cout<<"no palindrome";


	return 0;
	
}
