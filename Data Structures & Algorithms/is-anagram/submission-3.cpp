class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> chk;
        unordered_map<char, int> chk2;
        int len1 = s.size();
        int len2 = t.size();

        if(len1!=len2)
        {
            return false;
        }
        
        for(int i=0;i<len1;i++)
        {
            chk[s[i]] += 1;
            chk2[t[i]] += 1;
        }
        return chk == chk2;

    }
};
