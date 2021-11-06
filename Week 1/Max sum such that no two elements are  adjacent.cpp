https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int incl = arr[0];
        int excl = 0;
        int excln ;
        for(int i = 1; i < n; i++){
            excln = max(incl,excl); 
            incl = arr[i] + excl;
            excl = excln;
        }
        return max(incl,excl);
    }
};
