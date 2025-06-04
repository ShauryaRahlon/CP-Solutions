class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>ans;
        for(auto& s:strs){
            string key=s;
            sort(key.begin(),key.end());
            ans[key].push_back(s);
        }
        vector<vector<string>>res;
        for(auto i:ans)
        {
            res.push_back(i.second);
        }
        return res;
    }
};