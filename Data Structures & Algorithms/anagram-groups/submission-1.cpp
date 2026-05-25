class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++)
        {
            std::vector<int> count(26, 0);
            for (char c : strs[i]) {
                count[c - 'a']++;
            }

            std::string result;
            for (int i = 0; i < 26; i++) {
                result.append(count[i], 'a' + i);
            }
            
            m[result].push_back(strs[i]);
            

        }
        std::vector<std::vector<std::string>> result;

    for (const auto& pair : m) {
        result.push_back(pair.second);
    }
        return result;
        
}
};
