class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        st = set(nums)
        ans = 0
        for num in st:
            if (num-1) not in st: 
                length = 0
                curr = num
                while curr in st:
                    length+=1
                    curr+=1
                ans = max(ans , length)    
        return ans
