https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector <int> v;
        sort(arr,arr+n);
        int i = n-1;
        while(k--){
            v.push_back(arr[i]);
            i--;
        }
    
        return v;
    }
};
