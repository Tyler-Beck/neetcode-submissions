class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups;
        for(string word : strs){
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(word);
        }

        vector<vector<string>> result;
        for(auto [key, value] : groups){
            result.push_back(value);
        }

        return result;
    }
};
