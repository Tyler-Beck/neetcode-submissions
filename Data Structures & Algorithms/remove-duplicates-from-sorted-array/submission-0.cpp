class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1, right = 1;
        int k = left;

        for(int i = 1; i < nums.size(); i++){
            if(nums[right] != nums[right-1]){
                nums[left] = nums[right];
                left++;
                right++;
            } else {
                right++;
            }
        }
        k = left;
        return k;
    }
};