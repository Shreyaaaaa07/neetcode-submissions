class Solution {
public:
    void getallSubsets(vector<int>& nums, vector<int>& ans, int i,
                       vector<vector<int>>& allsubsets) {

        if (i == nums.size()) {
            allsubsets.push_back(ans);
            return;
        }

        // Include the current element
        ans.push_back(nums[i]);
        getallSubsets(nums, ans, i + 1, allsubsets);

        // Backtrack
        ans.pop_back();

        // Skip all duplicates while excluding
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx++;
        }

        // Exclude the current element
        getallSubsets(nums, ans, idx, allsubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allsubsets;
        vector<int> ans;

        getallSubsets(nums, ans, 0, allsubsets);

        return allsubsets;
    }
};