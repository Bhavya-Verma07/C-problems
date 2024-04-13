
#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Other headers as needed



int main()
{
  string s;
  cin>>s;
  int l= s.length();
  int sqt = floor(sqrt(l));
  int n = sqt*sqt;
  int d=2*(l-n);
  vector<vector<string> >mat(sqt, vector<string>(sqt));
  int index=0;

  for(int i=0; i<sqt ; i++){
    for(int j=0; j<sqt;j++){
       
           mat[i][j]= s[index++];
           
           if(l-index < d)
           mat[i][j]= mat[i][j]+s[index++];
       
     
    }    
  }
  for(int k=0; k<sqt; k++){
      for(int m=0; m<sqt; m++){
     cout<<mat[k][m]<<" ";
      } 
     cout<<endl;
  }
  
  
   return 0;
}