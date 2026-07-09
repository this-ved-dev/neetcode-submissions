class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        mp={}
        for index, value in enumerate(strs):
            
            temp = "".join(sorted(value))
            if temp not in mp: 
                mp[temp] = []
            mp[temp].append(index)
            
        result = []
        for key, res_index in mp.items():
            
            temp = []
            for i in res_index:
                temp.append(strs[i])
            result.append(temp)

        return result

