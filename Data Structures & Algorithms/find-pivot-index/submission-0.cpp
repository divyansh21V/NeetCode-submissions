class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        // 1. Calculate the total sum of the array
        for (int x : nums) {
            totalSum += x;
        }

        // 2. Iterate through and check the pivot condition
        for (int i = 0; i < nums.size(); i++) {
            // rightSum is effectively (totalSum - leftSum - nums[i])
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};