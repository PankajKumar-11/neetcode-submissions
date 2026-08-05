class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
      unordered_map<int,int> fr;
      for(int i = 0 ; i<n ; i++){
        if(fr.find(target-nums[i]) != fr.end()) return {fr[target-nums[i]],i};
        else fr[nums[i]] = i; 
      }
      return {-1,-1};
      

    }
};
