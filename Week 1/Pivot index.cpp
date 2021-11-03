https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int left_sum = 0,right_sum = 0;
        
        for(int i=0;i<nums.size();i++){
            left_sum+=nums[i];
            right_sum=sum-left_sum+nums[i];
            if(left_sum==right_sum)
                return i;
        }
        return -1;
    }
};
