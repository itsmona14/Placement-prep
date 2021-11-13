https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

string isValid(string s) {
    int count[26] = {0};
    vector<int> v;
    for(int i = 0 ; i < s.length(); i++)
        count[s[i] - 'a']++;
    
    sort(count,count+26);
    
    for(int i = 0 ;i < 26;i++){
       if(count[i] != 0)
            v.push_back(count[i]);
    }
    
    int first = v[0];
    int second = v[1];
    int last = v[v.size() - 1];
    int secondlast = v[v.size() - 2];
    
    if(first == last) return "YES";
    
    if(second == last) return "YES";
    
    if(first == second && second == secondlast && secondlast == last-1) return "YES";
    return "NO";    
}
