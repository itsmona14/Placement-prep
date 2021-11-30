https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1#

string merge (string S1, string S2)
{
    // your code here
    string str = "";
    int n1 = S1.size();
    int n2 = S2.size();
    
    for(int i = 0 ; i < n1 || i < n2; i++){
        if(i < n1)
            str += S1[i];
        if(i < n2)
            str += S2[i];
    }
    return str;
}
