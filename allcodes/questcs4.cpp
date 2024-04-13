#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Other headers as needed

int main()
{
  int T;
  cout<<"Input total time period."<<endl;
  cin>>T;
  vector<int>E;
  cout<<"Input Entering array"<<endl;
  for(int i=0; i<T; i++){
      int e;
      cin>>e;
      E.push_back(e);
  }
  vector<int>L;
    cout<<"Input Leaving array"<<endl;
  for(int i=0; i<T; i++){
      int l;
      cin>>l;
      L.push_back(l);
  }
  
  int t=0;
  int maxppl= INT_MIN;
  while(t<=T){
      int ppl = 0;
      for(int i=0; i<t; i++){
          ppl = ppl + (E[i]-L[i]);
      }
      maxppl = max(maxppl, ppl);
      t++;
  }
  
  cout<<"ans is "<<maxppl;
  
   return 0;
}