class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        d1 = {}
        d2 = {}
        for i , j in zip(s,t):
            if i in d1 and d1[i] != j:
                return False
            if j in d2 and d2[j] != i:
                return False
            
            d1[i] = j
            d2[j] = i
        return True
