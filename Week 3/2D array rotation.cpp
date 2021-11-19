https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1

For clockwise rotate:
1)Transpose the matrix
2)Reverse every row

For Anti-clockwise rotate:
1)Reverse every row
2)Transpose the matrix

class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {  // Anti-clockwise
	    // code here   
	    for(int i = 0 ;i < n ; i++){
	        reverse(arr[i].begin(),arr[i].end());
	    }
	    for(int i = 0; i < n ; i++){
	        for(int j = i+1; j < n ; j++){
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	}

};
