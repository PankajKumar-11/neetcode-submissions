class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for(int x : st){
            if(st.find(x-1)==st.end()){
                int curr = x;
                int len = 0;
                while(st.find(curr)!=st.end()){
                    curr++;
                    len++;
                }
                longest = max(longest,len);
            }
        }
        return longest;
    }
};
