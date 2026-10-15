class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        s = re.sub(r'[^a-zA-Z0-9]', ' ', s)
        s = "".join(s.split())
        s = s.lower()
        s_len = len(s)
        l=0
        r=s_len-1

        while l<r:

            if(s[l]!=s[r]):
                return False
            else:
                l+=1
                r-=1
        
        return True




