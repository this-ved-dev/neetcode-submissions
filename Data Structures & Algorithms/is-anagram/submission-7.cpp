class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> s_mp;
        unordered_map<char,int> t_mp;
        if(s.size() != t.size())
        return false;
        
        for(int i=0;i<s.size();i++)
        {
            s_mp[s[i]]+=1;
            t_mp[t[i]]+=1;
        }

        return s_mp==t_mp;
    }
};
