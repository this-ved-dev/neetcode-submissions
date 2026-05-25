class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> hmap;
        if(s.length()==t.length())
        {
            for(int i=0;i<s.length();i++)
            {
                hmap[s[i]] += 1;
            }

            for(int i=0;i<t.length();i++)
            {
                if(hmap.find(t[i]) != hmap.end())
                {
                    hmap[t[i]] -= 1;
                }
            }

            for(auto it=hmap.begin();it!=hmap.end();it++)
            {
                if(it->second != 0)
                return false;
            }
            return true;
        }
        return false;
    }
};
