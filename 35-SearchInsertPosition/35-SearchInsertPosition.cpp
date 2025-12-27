// Last updated: 27/12/2025, 08:42:52
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left=0,right=nums.size()-1;
5        while(left<=right){
6            int mid=left+(right-left)/2;
7            if(nums[mid]==target)return mid;
8            else if(nums[mid]<target)left=mid+1;
9            else right=mid-1;
10        }
11        return left;
12    }
13};