https://practice.geeksforgeeks.org/problems/anagram/0

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int a_count[26] = {0};
        for(int i = 0 ; i < a.length();i++){
            a_count[a[i] - 'a']++;
        }
        for(int i = 0 ; i < b.length();i++){
            a_count[b[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(a_count[i] != 0)
                return false;
        } 
        return true;
    }

};
