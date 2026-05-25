class Solution:
    def isValid(self, s: str) -> bool:
        arr = []  
        maps = { '{':'}', '[':']', '[':']', '(':')'}

        for c in s:
            if c in maps:
                 arr.append(c) 
            elif arr and maps[arr[-1]]==c:
                arr.pop()
            else:
                return False 
          
        if arr:
            return False 
        else: 
            return True
