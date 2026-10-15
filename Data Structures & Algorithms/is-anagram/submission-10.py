class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        s_len = len(s)
        t_len = len(t) 

        if s_len != t_len:
            return False 
        
        map = {}
        
        for c_s in s: 

            if c_s in map:
                map[c_s]+=1
            else:
                map[c_s] = 1
        
        for c_t in t:

            if c_t in map:
                map[c_t]-=1
            else:
                return False

        for key, value in map.items():
            if value != 0:
                return False
            else:
                continue
        
        return True

