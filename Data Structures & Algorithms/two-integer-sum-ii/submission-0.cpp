class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int t = numbers[i] + numbers[j];
            if (t == target) {
                return {i+1, j+1};
            } else if (t > target) {
                j--;
            } else {
                i++;
            }
        }
        return {};

    }
};
