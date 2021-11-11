https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1#

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        vector<pair<int,int>> v;
        for(int i = 0 ; i < N; i++){
            for(int j = 0 ; j < M; j++){
                if((A[i] + B[j]) == X){
                    v.push_back(make_pair(A[i],B[j]));
                }
            }
        }
        sort(v.begin(),v.end());
        
        return v;
    }
};
