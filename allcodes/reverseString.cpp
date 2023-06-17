#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	string rev= "";
     int l= str.length()-1;
   
while(l>=0){
		rev= rev + str[l];
	l--;
	}
	cout<< rev;
		return 0;
}


//int main(){
//	string str;
//	cin>>str;
//	string newstr;
//	int l= str.length()-1;
//	while(l>=0){
//		newstr = newstr+ str[l];
//		l--;
//	}
//	cout<< newstr;
//	return 0;
//	
//}
