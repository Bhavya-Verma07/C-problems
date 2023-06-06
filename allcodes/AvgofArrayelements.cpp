//average of elements in  array

#include<bits/stdc++.h>
using namespace std;

double avgofelements(int arr[], int n){
	int sum= 0;
	for(int i=0; i<n; i++){
		sum= sum+arr[i];	
	}
	return  (sum/double(n));
	
}

int main(){
	int n;
    cin>>n;
		int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<avgofelements(arr, n);
}
