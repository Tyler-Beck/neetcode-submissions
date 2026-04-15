class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for(int num : nums){
            if(map.count(num)){
                return true;
            } else {
                map.insert(make_pair(num, num));
            }
        }
        return false;
    }
};