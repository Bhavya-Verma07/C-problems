//finding the prime factors of a number

#include<iostream>
using namespace std;

int isprime(int p){
	for(int i=2; i<p; i++){
			if(p%i==0)
		{
			return false;
			}
			
	}
return true;
}

int primefactorsof(int x){
	for(int i=2; i<=x; i++){
		if(isprime(i)){
			int y=i;
		while(x%y==0){
			cout<<i<<" ";
			y= y*i;
		}
		
		}
	}
}


int main(){
int n;
cin>>n;
primefactorsof(n);
return 0;	
}
