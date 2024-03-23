//find the missing and repeating no. from the given 2D grid, such that exactly one is missing and one is repeating.






class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<int>arr;
       for(int i=0; i<n; i++){
        for(int j=0; j<n ;j++){
            arr.push_back(grid[i][j]);
        }
       }
int m = n*n ;
vector<int> hash(m + 1, 0);
for(int i= 0; i<m; i++){
    hash[arr[i]]++;   
}
int rep =-1;
int mis = -1;
for(int j=0; j<=m; j++){
    if(hash[j]==2){
        rep = j;
    }
    else if(hash[j]==0){
mis= j;
    }
}
if(rep!=-1 && mis !=-1 ){
    return {rep, mis};
}
return {-1,-1};
}
};