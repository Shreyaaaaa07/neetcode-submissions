class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);        // pre-size to 2n so indexing is safe

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];          // first half
            ans[i + n] = nums[i];      // second half
        }

        return ans;
    }
};