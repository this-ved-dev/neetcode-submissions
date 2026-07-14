import re
class Solution:
    def isPalindrome(self, s: str) -> bool:

        new_s = s.replace(" ","")
        new_s = re.sub(r'[^A-Za-z0-9]',"",new_s)
        new_s = new_s.lower()
        rev_s = new_s[::-1]
        if(new_s==rev_s):
            return True
        else:
            return False


        