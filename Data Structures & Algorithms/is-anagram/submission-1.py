class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
        dic = defaultdict(int)
        for index , val in enumerate(s):
            dic[s[index]] += 1
            dic[t[index]] -= 1
        
        for key in dic:
            if(dic[key]!=0):
                return False
        
        return True
