class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        maps={"]":"[","}":"{",")":"("}
        for i in s:
            if i in maps: 
                if stack and stack[-1] == maps[i]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(i)   
        return True if not stack else False
