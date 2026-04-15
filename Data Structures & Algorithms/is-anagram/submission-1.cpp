class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<int, char> maps;
        std::unordered_map<int, char> mapt;

        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            maps[s[i]]++;
            mapt[t[i]]++;
        }

        return maps == mapt;
    }
};
