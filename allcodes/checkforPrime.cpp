//check for prime


#include<iostream>
using namespace std;
int main(){
	int n;

	cout<<"check if the number is prime or composite:";
		cin>>n;
	if(n==0 || n==1){
			cout<<"neither prime nor composite";
return 0;}
	
		int i=2;
	while(i<n){
		
		if(n%i==0)
		{
			cout<<"Not Prime";
         return 0;	
		}
		i++;
		}
		
		cout<<"Prime";	
	return 0;
	

}
