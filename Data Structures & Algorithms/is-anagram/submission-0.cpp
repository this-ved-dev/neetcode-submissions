class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> m1;

        if(s.length() != t.length())
        {
            return false;
        }

        for(int i=0;i<s.length();i++)
        {
            m1[s[i]] += 1;
        }

        for(int i=0;i<t.length();i++)
        {
            if(m1[t[i]])
            {
                m1[t[i]]-=1;
                if(m1[t[i]]==0)
                m1.erase(t[i]);
            }
            else
            return false;
        }
        if(m1.empty())
        {
            return true;
        }
    }
};
