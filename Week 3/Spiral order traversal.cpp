https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> v;
        int row_start = 0;
        int row_end = r-1;
        int col_start = 0;
        int col_end = c-1;
        
        while(row_start <= row_end && col_start <= col_end){
            if(row_start <= row_end && col_start <= col_end){
                for(int col = col_start; col <= col_end ; col++){
                    v.push_back(matrix[row_start][col]);
                }
                row_start++;
            }
            if(row_start <= row_end && col_start <= col_end){
                for(int row = row_start; row <= row_end; row++){
                    v.push_back(matrix[row][col_end]);
                }
                col_end--;
            }
            if(row_start <= row_end && col_start <= col_end){
                for(int col = col_end ; col >= col_start ; col--){
                    v.push_back(matrix[row_end][col]);
                }
                row_end--;
            }
           
            if(row_start <= row_end && col_start <= col_end){
                for(int row = row_end ; row >= row_start ; row--){
                    v.push_back(matrix[row][col_start]);
                }
                col_start++;
            }
            
        }
        
        return v;
    }
};
