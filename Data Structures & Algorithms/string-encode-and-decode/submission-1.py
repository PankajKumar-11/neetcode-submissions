class Solution:

    def encode(self, strs: List[str]) -> str:
        e =[]
        for s in strs:
            e.append(str(len(s))+'#'+s)    
        e= "".join(e)
        return e
    def decode(self, s: str) -> List[str]:
        num = 0
        ans = []
        i = 0
        while(i<len(s)):
            j = i
            while s[j]!='#':
                j+=1
            length = int(s[i:j])
            word = s[j+1 : j+1+length]
            ans.append(word)
            i = j+1+length
        
        return ans


