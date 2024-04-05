//Given an array containing N integers and an integer K., 
// Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

// Brut. Solution

#include <iostream>
#include<stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

 int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
       int count = 0;
       int i=0;
       int j=0;
        for(i=0; i<N; i++){
             int sum = 0;
            for(j=i; j<N; j++){
                sum  = sum + A[j];
               
                if(sum == K){
                     int c = j-i+1;
                  count =  max(count, c);
                }
            }
        }
        return count;
    }




//Better solution

//for positiv elements only
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<long long, long long> preSumMap;
        long long sum=0;
       long long maxlen = 0;
      
        for(long long i=0; i<N; i++){
           
                sum  = sum + A[i];
               
                if(sum == K){
                     
                  maxlen =  max(maxlen, i+1);
                }
            long long remain = sum -K;
            if(preSumMap.find(remain) != preSumMap.end()){
              long long len = i- preSumMap[remain];   
                maxlen = max(maxlen, len);
            }
            preSumMap[sum] =i;
        }
        return maxlen;
        
        
     
    } 



    //optimal solution

    

