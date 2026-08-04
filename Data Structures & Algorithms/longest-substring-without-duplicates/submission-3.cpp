class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> fr(128,0);
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
