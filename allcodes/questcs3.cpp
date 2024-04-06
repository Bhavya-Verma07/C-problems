// Roco is an island near Africa which is very prone to forest fire. Forest fire is such that it destroys the complete forest. Not a single tree is left. 
// This island has been cursed by God, and the curse is that whenever a tree catches fire, 
// it passes the fire to all its adjacent tree in all 8 directions, North, South, East, West, North-East, North-West, South- East, and South-West.
// And it is given that the fire is spreading every minute in the given manner, i.e every tree is passing fire to its adjacent tree. 
// Suppose that the forest layout is as follows where T denotes tree and W denotes water.

// Your task is that given the location of the first tree that catches fire, determine how long would it take for the entire forest to be on fire. 
// You may assume that the lay out of the forest is such that the whole forest will catch fire for sure and that there will be at least one tree in the forest.

// Input Format:

// • First line contains two integers, M, N, space separated, giving the size of the forest in terms of the number of rows and columns respectively.

// • The next line contains two integers X,Y, space separated, giving the coordinates of the first tree that catches the fire. 1

// • The next M lines, where I th line contains N characters each of which is either T or W, giving the position of the Tree and Water in the ith row of the forest.



// Output Format:

// Single integer indicating the number of minutes taken for the entire forest to catch fire

// Constrains:

// • 3≤M≤ 20

// • 3 ≤ N ≤ 20

// Sample Input 1:

// 33

// WTT

// TWW

// WTT












#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// #include <bits/stdc++.h>
// using namespace std;


bool isValid(int x, int y, int m, int n){
    return (x>=0 && x<m && y>=0 && y<n);
}


int bfs(int x, int y, int m, int n, vector<vector<char> >forest)
{
    int ans = -1;
    //queue to store pairs of co-ordinates and time
    //also initialising it
    queue<pair<pair<int, int>,int>>q;
    q.push({{x, y}, 0});
    
    //making a visited vector matrix which shows the burnt trees
    //initialising the visited vector element as true at given co-odinates
    vector<vector<bool>>visited(m, vector<bool>(n, false));
    
    visited[x][y] = true;
    //defining all the possible directions 
    vector<pair<int, int>>directions={{0,1}, {1,0},{0,-1}, {-1,0},{1,1}, {-1,-1},{-1,1},{1,-1}};
    
    //moving inside queue till its not empty
    //and traversing the first pair each time to get co-ordinates and time and mark them visited
    while(!q.empty()){
        int sz= q.size();
        while(sz--){
            int xz= q.front().first.first;
            int yz = q.front().first.second;
            int time = q.front().second;
            ans = max(ans, time);
            q.pop();
            
            for(auto &dir : directions){
                int new_x = xz +dir.first;
                int new_y = yz +dir.second;
                
                if(isValid(new_x, new_y, m, n)&& forest[new_x][new_y] == 'T' && !visited[new_x][new_y]){
            q.push({{new_x,new_y}, time + 1});
                visited[new_x][new_y] = true;    
                }
                
            }
            
        }
    } 
    
   return ans; 
}


int main()
{
   //take inputs
   int m, n;
   cin>>m>>n;
   int x,y;
   cin>>x>>y;
   vector<vector<char>>forest(m,vector<char>(n, 'a'));
   for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
           cin>>forest[i][j];
       }
   }
   //function call for time count
   int ans = bfs(x-1, y-1, m, n, forest);
   cout<<ans<<endl;

}
