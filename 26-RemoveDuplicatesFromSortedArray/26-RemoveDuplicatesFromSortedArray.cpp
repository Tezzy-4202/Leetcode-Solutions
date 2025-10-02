// Last updated: 02/10/2025, 13:21:42
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto dup = unique(nums.begin(),nums.end());
        nums.erase(dup,nums.end());
        
        return nums.size();
    }
};