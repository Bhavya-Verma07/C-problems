//{ Driver Code Starts
#include <stdio.h>
#include <iostream>
#include<vector>
#include<math.h>

using namespace std;

// } Driver Code Ends
class Solution {   
     void dfs(int node, vector<int>adj[], int visited[], vector<int>&list){
     visited[node]= 1;
     list.push_back(node);
     //traverse the neighbour
     for(auto it: adj[node]){
         if(!visited[it]){
             dfs(it, adj, visited, list);
         }
     }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    // V = no. of nodes



    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
     int visited[V]={0};    
     int start= 0; 
     vector<int>list;    //list to store dfs
     dfs(start, adj, visited, list );
     return list;
    }
};

//{ Driver Code Starts.
    int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends