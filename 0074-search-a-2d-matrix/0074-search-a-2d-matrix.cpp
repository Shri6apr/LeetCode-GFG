class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(); // Number of rows
        int m = matrix[0].size(); // Number of columns
        
        int start = 0;
        int end = m - 1;
        
        for(int row = 0; row < n; row++) { // Corrected loop condition
            if (target >= matrix[row][0] && target <= matrix[row][m - 1]) { // Use <=
                while (start <= end) {
                    int mid = (start + end) / 2;
                    int midVal = matrix[row][mid]; // Corrected comparison
                    
                    if (target == midVal) {
                        return true;
                    } else if (target < midVal) {
                        end = mid - 1;
                    } else {
                        start = mid + 1;
                    }
                }
            }
        }
        
        return false;
    }
};
