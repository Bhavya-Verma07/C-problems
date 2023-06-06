//check whether the array isw sorted or not

#include<bits/stdc++.h>
using namespace std;


int Sorted(int arr[],int n){
	for(int i=0; i<n; i++){
	
		if(arr[i]<arr[i-1]){
			return false;
		}
		}
		return true;
}

int main(){
	int n;
	int arr[n];
	cout<<"Is the given array sorted or not ";
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

if(Sorted(arr,n)==false){
	cout<<"Not Sorted";
}
else
cout<<"Sorted";
return 0;
}
