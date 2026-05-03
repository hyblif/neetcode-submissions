class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> hash;
        for (const auto& str : strs) {
            string sorted_str = str;
            ranges::sort(sorted_str.begin(), sorted_str.end());
            hash[sorted_str].push_back(str);
        }
        for (const auto& [_, value] : hash) {
            ans.push_back(value);
        }
        return ans;
    }
};
