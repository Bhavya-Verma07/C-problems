//sum of elements in  array

#include<bits/stdc++.h>
using namespace std;

int sumofelements(int arr[], int n){
	int sum= 0;
	for(int i=0; i<n; i++){
		sum= sum+arr[i];	
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<sumofelements(arr, n);
	return 0;
}
