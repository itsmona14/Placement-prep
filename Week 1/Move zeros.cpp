 https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right = 0;
        int temp;
        int n = nums.size();
        if(n == 0 || n == 1)
            return;
        
        while(right < n){
            if(nums[right] == 0)
                    right++;
            else{
                temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                
                right++;
                left++;
            }
        }
    }
};
