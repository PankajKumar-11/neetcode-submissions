class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> fr;
        for(int x : nums){
            fr[x]++;
        }
        int n = nums.size();
        vector<vector<int>> b(n+1);
        for(auto it : fr){
            b[it.second].push_back(it.first);
        }
       vector<int> ans;
        for(int i = n ; i>=0 ; i--){
            if(ans.size()==k) break;
            else {
                for(int el : b[i]) ans.push_back(el);
            }
        }
        return ans;
        }
};
