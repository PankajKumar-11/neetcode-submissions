class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        vector<int> fr(26,0);
        for(int i = 0 ; i<n ; i++){
            fr[s[i]-'a']++;
            fr[t[i]-'a']--;
        }
        for(int i = 0 ; i<26 ; i++){
            if(fr[i]>0) return false;
        }
        return true;
    }
};
