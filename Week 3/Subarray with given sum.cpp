https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#

vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> v;
        long long left = 0;
        long long right = 0;
        long long sum = 0;
        while(right <= n){
            if(sum < s){
                sum += arr[right];
                right++;
            }
            else if(sum > s){
                sum -= arr[left];
                left++;
            }
            else if(sum == s){
                v.push_back(left+1);
                v.push_back(right);
                break;
            }
        }
        if(v.size() == 0){
            v.push_back(-1);
        }
        return v;
    }
};
