https://www.hackerrank.com/challenges/beautiful-pairs/problem

int beautifulPairs(vector<int> A, vector<int> B) {
    int n = A.size();
    vector<int> a_count(1000,0),b_count(1000,0);
    int res = 0;
    for(int i = 0 ; i < A.size() ; i++){
        a_count[A[i]]++;
        b_count[B[i]]++;
    }
    
    for(int i = 0 ; i < 1000; i++){
        res += min(a_count[i],b_count[i]);
    }
    
    return (res == n ? res-1: res+1);
}
