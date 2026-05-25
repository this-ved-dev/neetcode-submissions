class Solution:
    def isPalindrome(self, s: str) -> bool:
        newStr = ""
        for c in s:
            if c.isalnum():
                newStr += c.lower()
        l = len(newStr)-1
        for i in range(math.floor(len(newStr)/2)):
            
            if(newStr[i]==newStr[l-i]):
                continue
            elif(newStr[i]!=newStr[l-i]):
                return False
            
        
        return True