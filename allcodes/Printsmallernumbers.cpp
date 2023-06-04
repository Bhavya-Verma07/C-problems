//print all the numbers that are less than n and are not the multiple of x

#include<iostream>
using namespace std;


int main(){
	cout<<"enter a number";
	int n, x;
	cin>>n>>x;
	cout<<"Here are the numbers that are less than " <<n <<"and are not the multiple of "<<x<<" ";
		for(int i=1; i<=n; i++){
		if(i%x!=0)
//				continue;
			cout<<i<<" ";


}
	return 0;
}
