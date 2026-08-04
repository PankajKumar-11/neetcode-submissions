class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char ,int> fr;
        int low = 0 ;
        int longest = 0;
        for(int high = 0 ; high<n ; high++){
            fr[s[high]]++;
            while(fr[s[high]]>1){
                fr[s[low]]--;
                low++;
            }
            longest = max(longest , high-low+1);

        }
        return longest;

    }
};
