https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = nums.size() - 1 ; i > 1; i--){
            if((nums[i] == nums[i-1]) && (nums[i] == nums[i-2]))
                nums.erase(nums.begin() + i );
        }
        
        
        return nums.size();
    }
};
