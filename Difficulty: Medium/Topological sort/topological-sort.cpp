//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return list containing vertices in Topological order.
    
    void DFS(int node, vector<vector<int>>&adj, vector<bool>&visited, stack<int>&stack){
        
        visited[node] =1;
        
        for(int i=0;i<adj[node].size(); i++){
            
            if(!visited[adj[node][i]]){
                
                DFS(adj[node][i], adj, visited, stack);
                
            }
        }
        stack.push(node);
        
        
    }
    
    
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        // Your code here
        
        
        int v = adj.size();
        
        // DFS APPROACH:
        
        // vector<bool> visited(v,0);
        // stack<int> s;
        
        // for(int i=0;i<v;i++){
            
        //     if(!visited[i]){
        //         DFS(i, adj, visited,s);
        //     }
            
        // }
        
        // vector<int>ans;
        // while(!s.empty()){
        //     ans.push_back(s.top());
        //     s.pop();
            
        // }
        
        // return ans;
        
        //BFS APPROACH: KHAN'S Algorithm
        
        //1-> calculate each nodes indegree first
        vector<int> inDegree(v,0);
        
        for(int i=0;i<v;i++){
            for(int j=0; j<adj[i].size(); j++){
                
                inDegree[adj[i][j]]++;
            }
        }
        
        //2-> push all nodes in queue which are having indegree as 0
        queue<int> qu;
        vector<int>ans;
        
        for(int i=0;i<v;i++){
            if(!inDegree[i]) {
                qu.push(i);
                ans.push_back(i);
            }
        }
        
        //3 -> explore all its neighbour by decreasing indegree by 1 and if indegree became 0 then push onto the queue
        
        while(!qu.empty()){
            
            int node = qu.front();
            qu.pop();
            
            for(int i=0; i<adj[node].size(); i++){
                
                inDegree[adj[node][i]]--;
                if(! inDegree[adj[node][i]]){
                     qu.push(adj[node][i]);
                     ans.push_back(adj[node][i]);
                }
                
            }
        }
        
        
        return ans;
        
    }
    
};


//{ Driver Code Starts.

/*  Function to check if elements returned by user
 *   contains the elements in topological sorted form
 *   V: number of vertices
 *   *res: array containing elements in topological sorted form
 *   adj[]: graph input
 */
int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        int u, v;

        vector<vector<int>> adj(N);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topologicalSort(adj);

        cout << check(N, res, adj) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends