class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        t_mp = {}
        s_mp = {}

        if(len(s) != len(t)):
            return False

        for i in s:
            if i not in s_mp:
                s_mp[i] = 0

            s_mp[i] += 1

        for j in t:
            
            if j not in t_mp:
                t_mp[j] = 0

            t_mp[j] += 1
        
        if(s_mp==t_mp):
            return True
        else:
            return False
            
            
