https://practice.geeksforgeeks.org/problems/save-ironman0227/1

bool saveIronman(string ch)
{
    // Complete the function
    string s;
    for(int i = 0 ; ch[i] != '\0'; i++){
        ch[i] = tolower(ch[i]);
        if((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= '0' && ch[i] <= '9'))
            s += ch[i];
    }
    ch = "";
    ch = s;
    reverse(s.begin(), s.end());
    
    if(ch == s)
        return true;
    return false;
}
