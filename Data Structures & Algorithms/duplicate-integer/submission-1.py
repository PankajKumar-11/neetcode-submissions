class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        a = Counter(nums)
        for key in a.keys():
            if (a[key] > 1):
                return True

        return False
