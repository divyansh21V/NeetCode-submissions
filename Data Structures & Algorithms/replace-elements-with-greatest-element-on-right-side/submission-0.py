class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        z = []
        for i in range(len(arr)-1):
            z.append(max(arr[i+1:]))
        z.append(-1)
        return z


        