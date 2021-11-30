https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> v;
        string str = "";
        for(int i = 0 ; i < S.length() ; i++){
            if(S[i] != '.'){
                str += S[i];
            }
            else{
                v.push_back(str);
                str = "";
            }
        }
        v.push_back(str);
        S = "";
        for(int i =  v.size() - 1 ; i > 0 ; i--){
            S += (v[i] + '.');
        }
        S += v[0];
        return S;
    } 
};
