https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1#

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here      
        vector<long long int> v;
        long long int product = 1;
        long long int product0 = 1; 
        int zero = 0;
        for(int i = 0 ; i < n ; i++){
            product *= nums[i];
            if(!nums[i])
                zero++;
            else
               product0 *= nums[i];
       }
       for(int i = 0 ; i < n ; i++){
           if(!nums[i])
               v.push_back(zero > 1 ? 0 : product0);
           else
               v.push_back(product/nums[i]);
       }
        return v;
    }
};
