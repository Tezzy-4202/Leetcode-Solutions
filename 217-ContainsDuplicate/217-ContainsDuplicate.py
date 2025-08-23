# Last updated: 8/23/2025, 11:36:49 AM
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashset = set()
        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)    
        return False        
        