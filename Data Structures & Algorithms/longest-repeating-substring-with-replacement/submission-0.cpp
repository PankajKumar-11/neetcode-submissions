class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int low = 0;
        int longest = 0;
        int maxFreq = 0;
        unordered_map<char,int>fr;
        for(int high = 0 ; high<n ; high++){
            fr[s[high]]++;
            maxFreq = max(maxFreq , fr[s[high]]);
           while((high-low+1)-maxFreq>k){
            fr[s[low]]--;
            low++;
           }
           longest = max(longest , high-low+1);
        }
        return longest;
    }
};
