https://practice.geeksforgeeks.org/problems/implement-atoi/1

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int res = 0;
        int sign = 1;
        int i = 0;
        if(str[0] == '-'){
            sign = -1;
            i++;
        }
                
        while(str[i] != '\0'){
            if(str[i] >= '0' && str[i] <= '9') 
                res = res * 10 + (str[i] - '0');
            else
                return -1;
            i++;
        }
        return sign * res;
    }
};
