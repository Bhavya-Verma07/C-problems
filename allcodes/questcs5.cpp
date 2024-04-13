// factorial of digits of a given number, if equal to the given number, then string, else not strong



#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Other headers as needed

int factorial(int n){
    int fac=1;
  for(int j=0; j<n; j++){
      if(n>1){
   fac=  (n-j)*fac;
      }
  }
  return fac;
}

int main()
{
    int n;
    cin>>n;
    int r;
    
    int ans=0;
    int q=n;
    while(q>0){
        
     r= q%10;
     ans = ans+ factorial(r);
     q = q/10;
    }
    
if(ans == n){
    cout<<"strong";
}
else{
   cout<< "not strong";
}
   return 0;
}
