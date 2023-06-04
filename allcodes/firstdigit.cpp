//first digit of a number
#include<iostream>
using namespace std;

int firstDigitis(int x){
while(int y=x/10){

		if(y<10){
			cout<<y;		
		}
		x= x/10;
	}
}
int main(){
	int n;
	cout<<"enter a number";
	cin>>n;
	firstDigitis(n);
	return 0;
}
