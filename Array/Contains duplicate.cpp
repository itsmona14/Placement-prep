https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        sort(nums.begin(),nums.end());
        for(int i = nums.size()-1; i > 0 ; i--){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return ans;
    }
};
