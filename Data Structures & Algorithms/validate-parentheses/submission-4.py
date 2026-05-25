class Solution:
    def isValid(self, s: str) -> bool:
        arr = []  
        maps = { '}': '{', ']': '[', ')': '('}

        for c in s: 

            if c in maps: 
                if arr and arr[-1] == maps[c]:
                    arr.pop() 
                else:
                    return False 
                
            else:
                arr.append(c)
        
        if arr: 
            return False 
        else:
            return True