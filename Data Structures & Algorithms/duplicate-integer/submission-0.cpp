class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> fr;
        for(int x : nums){
            fr[x]++;
        }
        for(auto it : fr){
            if(it.second>1) return true;
        }
        return false;
        
    }
};