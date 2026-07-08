class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>>mp;

        for(auto &it:str){
            string key=it;
            sort(key.begin(),key.end());
            mp[key].push_back(it);
        }
        vector<vector<string>>ans;
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
