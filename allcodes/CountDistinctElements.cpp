//count distinct elements


#include<iostream>
using namespace std;

int countDistinct(int arr[], int n){
	int count=0;

	
	for(int i=0; i<n; i++ ){
		bool isDistinct= true;
		
		for(int j=0; j<i; j++){
				if(arr[i]==arr[j]){
					isDistinct= false;
					break;
				}
		}
		if(isDistinct==true)
	{
	count++;
	}
	}
return count;
}  
int main(){
	int n;

	cin>>n;
		int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	cout<<countDistinct(arr, n);
	return 0;
}
