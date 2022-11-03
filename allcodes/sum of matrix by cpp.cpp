#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	cout<<"enter 9 numbers for matrix A";
for(i=0;i<=2;i++)
    {
	for(j=0;j<=2;j++)
	cin>>A[i][j];
	}
    cout<<"enter 9 numbers for matrix B";
for(i=0;i<=2;i++)
    {
	for(j=0;j<=2;j++)
	cin>>B[i][j];
	}
cout<<"sum of matrix A and B is"<<"\n";
for(i=0;i<=2;i++)	
{
	for(j=0;j<=2;j++)
	{
		C[i][j]=A[i][j]+B[i][j];
		cout<<C[i][j]<<" ";
		}
		cout<<"\n";	
		}
return 0;			
}
