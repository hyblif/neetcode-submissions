class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        ranges::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int x = nums[i];
            if(i && x == nums[i-1]){
                continue;
            }
            int j = i + 1;
            int k = n - 1;
            //
            //
            while (j < k) {
                int y = nums[j] + nums[k] + x;
                if (y > 0) {
                    k--;
                } else if (y < 0) {
                    j++;
                } else {
                    ans.push_back({x, nums[j], nums[k]});
                    j += 1;
                    while (nums[j] == nums[j - 1]) {
                        j++;
                    }
                    k -= 1;
                    while (nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};
