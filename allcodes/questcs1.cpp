//  find the number of elements in an array such that the elements before it are strictly lesser that it

#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;

int main()
{
  int arr[]={3,4,5,3};
  int n= sizeof(arr)/sizeof(arr[0]);

// --------brut-------

//   int maxi= 1;
//   for(int i=0; i<n; i++){
//       int count=0;
//       for(int j=0; j<i; j++){
//           if(arr[j]<arr[i]){
//               count++;
//           }
         
//       }
//         maxi = max(count, maxi);
//   }
//   cout<<maxi;
//    return 0;


// -------brut--------

int maxi= arr[0];
int i=0;
int count=0;
while(i<n){
    if(maxi< arr[i]){
        count++;
    }
    maxi= arr[i];
    i++;
}
cout<<count;



return -1;

}