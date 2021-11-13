https://www.hackerrank.com/challenges/missing-numbers/problem

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    vector<int> a_count(1000000,0), b_count(1000000,0);
    vector<int> v;
    for(int i = 0 ; i < arr.size();i++)
        a_count[arr[i]]++;
    for(int i = 0 ; i < brr.size();i++)
        b_count[brr[i]]++;
    for(int i = 0 ; i < a_count.size();i++){
        if(a_count[i] != b_count[i])
            v.push_back(i);
    }
     return v;   
}
