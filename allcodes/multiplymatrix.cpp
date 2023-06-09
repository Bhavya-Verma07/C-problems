#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<vector<int> >matA(n, vector<int> (n, 0));
	vector<vector<int> >matB(n, vector<int> (n, 0));
	vector<vector<int> >res(n, vector<int> (n, 0));
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
		int a;
		cin>>a;
		matA[i][j]= a;
		}	
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
		int a;
		cin>>a;
		matB[i][j]= a;
		}	
	}
	
	for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
			{
				cout<<matA[i][j]<<" ";				
			}
			cout<<endl;
	}
	cout<<" is multiplied by"<<endl;
		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
			{
				cout<<matB[i][j]<<" ";				
			}
			cout<<endl;
	}

cout<<" gives"<<endl;
		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++){
				res[i][j]=0;
			for(int k=0; k<n; k++)
			{
					res[i][j]= res[i][j]+(matA[i][k]*matB[k][j]);			
			}
		}
	}
		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
			{			
				cout<<res[i][j]<<" ";				
			}
			cout<<endl;
	}
	return 0;
}
