class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (const int& num : nums) {
            hash[num]++;
        }
        auto cmp = [&](const int& a, const int& b) {
            return hash.at(a) < hash.at(b);  // 此时为最小堆（Value 小的先出）
        };
        priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
        for (const auto& [key, _] : hash) {
            pq.push(key);
        }
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
