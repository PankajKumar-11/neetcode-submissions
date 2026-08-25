class TimeMap {
public:
    unordered_map<string , vector<pair<int , string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp , value});
    }
    
    string get(string key, int timestamp) {
        string ans = "";
        for(auto it : mp[key]){
            if(it.first <= timestamp) ans = it.second;
            else break;
        }
        return ans;
        
    }
};
