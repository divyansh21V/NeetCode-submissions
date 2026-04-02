class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        l = []
        nums.sort()

        def backtrack(i,subset):
            if i == len(nums):
                l.append(subset[::])
                return

            #All subsets that inlcude nums[i]
            subset.append(nums[i])
            backtrack(i+1,subset)
            subset.pop() 

            #All subsets that don't include nums[i]
            while i+1 < len(nums) and nums[i] == nums[i+1]:
                i+=1
            backtrack(i+1,subset)
        backtrack(0,[])
        return l
