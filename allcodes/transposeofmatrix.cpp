#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<int> >arr(n, vector<int> (n, 0));
	vector<vector<int> >trans(n, vector<int> (n, 0));
	
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
		int a;
		cin>>a;
		arr[i][j]= a;
		}	
	}
	
	for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
			{
				cout<<arr[i][j]<<" ";				
			}
			cout<<endl;
	}

		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
			{
					trans[i][j]= arr[j][i];			
			}
	}
		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
			{			
				cout<<trans[i][j]<<" ";				
			}
			cout<<endl;
	}
	return 0;
}
