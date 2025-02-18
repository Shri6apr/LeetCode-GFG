//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int x[4] = {0, 0, -1, 1}; // movement directions (up, down, left, right)
    int y[4] = {1, -1, 0, 0};

    // Check if the position is within the matrix boundaries
    bool safe(int i, int j, int N, int M) {
        return (i >= 0 && j >= 0 && i < N && j < M);
    }

    // BFS function to explore the water flow
    void BFS(vector<vector<int>>& matrix, int N, int M, queue<pair<int, int>>& q,
             vector<vector<bool>>& visited) {
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();

            visited[cur.first][cur.second] = true;

            // Explore the four possible directions
            for (int i = 0; i < 4; i++) {
                int nx = cur.first + x[i];
                int ny = cur.second + y[i];

                if (safe(nx, ny, N, M) &&
                    matrix[nx][ny] >= matrix[cur.first][cur.second] &&
                    !visited[nx][ny]) {
                    q.push({nx, ny});
                    visited[nx][ny] = true;
                }
            }
        }
    }

    // Main function to find the count of valid coordinates
    int countCoordinates(vector<vector<int>>& mat) {
        int N = mat.size();    // number of rows
        int M = mat[0].size(); // number of columns

        queue<pair<int, int>> pacificQueue, atlanticQueue;
        vector<vector<bool>> pacificVisited(N, vector<bool>(M, false));
        vector<vector<bool>> atlanticVisited(N, vector<bool>(M, false));

        // Push cells connected to the Pacific Ocean (left and top borders)
        for (int i = 0; i < M; i++) {
            pacificQueue.push({0, i});
            atlanticQueue.push({N - 1, i});
        }
        for (int i = 0; i < N; i++) {
            pacificQueue.push({i, 0});
            atlanticQueue.push({i, M - 1});
        }

        // Perform BFS from both oceans
        BFS(mat, N, M, pacificQueue, pacificVisited);
        BFS(mat, N, M, atlanticQueue, atlanticVisited);

        int ans = 0;

        // Count the cells that are reachable from both oceans
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (pacificVisited[i][j] && atlanticVisited[i][j]) {
                    ans++;
                }
            }
        }

        return ans;
 
 
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.countCoordinates(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends