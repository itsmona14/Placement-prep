https://www.hackerrank.com/challenges/crush/problem

long arrayManipulation(int n, vector<vector<int>> queries) {
    long maxi = INT_MIN;
    long sum = 0;
    vector<int> v(10000000,0);
    for(int i = 0 ; i < queries.size();i++){
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        
        v[a] += k;
        v[b+1] -= k;
    }
    
    for(int i = 0 ; i < v.size() ;i++){
        sum += v[i];
        maxi = max(sum,maxi); 
    }
    return maxi;
}
