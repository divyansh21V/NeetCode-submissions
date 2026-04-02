class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l = []
        for i in range(len(nums)):
            x = 1
            for j in range(len(nums)):
                if j != i :
                    x = x*nums[j]
            l.append(x)
        return l        

        