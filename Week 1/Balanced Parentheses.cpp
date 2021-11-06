https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '(')
                    st.push(s[i]);
            else if(s[i] == ']'){
                if(!st.empty() && st.top() == '['){
                    ans = true;
                    st.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(s[i] == '}'){
                if(!st.empty() && st.top() == '{'){
                    ans = true;
                    st.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    ans = true;
                    st.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
        if(!st.empty())
            ans = false;
    
        return ans;
    }
};
