// Last updated: 10/09/2025, 22:08:48
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto dup = unique(nums.begin(),nums.end());
        nums.erase(dup,nums.end());
        
        return nums.size();
    }
};