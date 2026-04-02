class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 0:
            return [[]]

        perms = self.permute(nums[1:])
        l = []
        for i in perms:
            for x in range(len(i) + 1):
                i_copy = i.copy()
                i_copy.insert(x, nums[0])
                l.append(i_copy)
        return l