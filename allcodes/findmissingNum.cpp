//finding a missing number


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main(){
	int t;
	cin>>t;
	while(t--){
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0; i<n-1; i++){
			cin>>a[i];
			
		}
		cout<<missingNumber(a,n)<<endl;
	}
}

int missingNumber(int A[], int N)
{
   
    int i;
    for(i=1; i<=N; i++)
    {
        int flag=0;
        for(int j=0; j<N-1; j++)
        {
            if(A[j]==i)
           { 
            flag =1;
            break;
               
           }
        }
         
    if(flag ==0){
        return i;
    }
    
    }
   
} 
