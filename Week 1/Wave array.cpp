https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        int temp;
        sort(arr.begin(),arr.end());
        
        for(int i = 0; i < arr.size() - 1; i+=2){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        
    }
};
