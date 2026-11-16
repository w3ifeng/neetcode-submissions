class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seenMap = {}
        
        for i, n in enumerate(nums):
            complement = target - n
            if complement in seenMap:
                return [seenMap[complement], i] 
            seenMap[n] = i
         