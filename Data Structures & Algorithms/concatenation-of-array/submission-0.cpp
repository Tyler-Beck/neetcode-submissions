class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n * 2; i++){
            int j = i % nums.size();
            ans.push_back(nums[j]);
        }

        return ans;
    }
};