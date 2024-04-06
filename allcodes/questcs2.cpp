
//move all the zeros to end,
 //sort the remaining element
 //print the array


#include <iostream>
#include<stdio.h>
#include <algorithm>
#include<vector>
using namespace std;


 int main()
{


 int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input array elements
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    //   int arr[] = {1, 4, 7, 2, 0, 9, 0, 4};
    //   int n= sizeof(arr)/ sizeof(arr[0]);
    vector<int>a;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            a.push_back(arr[i]);
        }
    }
 
  sort(a.begin(), a.end());
  
   for (int i = 0; i < a.size(); i++) {
        arr[i] = a[i];
    }

  int j=a.size();
  while(j<n){
     arr[j]=0;
      j++;
  }
 
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<",";
    }
 
}
