class Solution:
    def isPalindrome(self, s: str) -> bool:
        r = []
        for char in s:
            if(char.isalnum()):
                r.append(char.lower())
        r = "".join(r)
        return r == r[::-1]