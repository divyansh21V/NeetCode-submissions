class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        temp = ""
        start , final = 0 , len(s)-1
        for i in range(len(s)//2):
            if start < final :
                temp = s[start]
                s[start] = s[final] 
                s[final] =  temp
                start += 1
                final -= 1
            else:
                return s
            