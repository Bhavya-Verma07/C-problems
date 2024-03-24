// You are given an n x n 2D matrix representing an image,
//  rotate the image by 90 degrees (clockwise).

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
         std::vector<std::vector<int>> temp = matrix;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matrix[j][n-i-1]= temp[i][j];
            }
        }
        
    }
};